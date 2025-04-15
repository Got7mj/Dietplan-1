erDiagram

    EMPREGADO {
        string codigo PK
        string nome
        string email
        string tipo
    }

    HORARIO_LIVRE {
        string codigo_empregado PK
        int horas_mensais
        int horas_minimas_dia
    }

    HORARIO_FIXO {
        string codigo_empregado PK
    }

    DIA_SEMANA {
        string codigo PK
        string nome
    }

    TURNO {
        string id PK
        time horario_inicio
        time horario_fim
    }

    PONTO {
        string empregado_id
        string dia_id
        string turno_id
        time entrada
        time saida
    }

    EMPREGADO ||--|| HORARIO_LIVRE : possui
    EMPREGADO ||--|| HORARIO_FIXO : possui

    EMPREGADO ||--o{ PONTO : registra
    DIA_SEMANA ||--o{ PONTO : ocorre_em
    TURNO ||--o{ PONTO : no_turno
