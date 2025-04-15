# 📊 Sistema de Controle de Frequência de Empregados

Este projeto tem como objetivo modelar, no nível conceitual, um sistema de controle de frequência de empregados de uma organização, utilizando o modelo Entidade-Relacionamento (ER) representado com Mermaid.js.

---

## ✅ Objetivos

- Controlar ponto de entrada e saída dos empregados
- Registrar turnos e dias da semana
- Diferenciar empregados com horário livre e horário fixo
- Evitar redundância de dados
- Criar um modelo ER **sem chaves estrangeiras** (nível conceitual)

---

## 🧩 Diagrama ER (Conceitual)

```mermaid
erDiagram

    EMPREGADO {
        string | codigo PK
        string | nome
        string | email
        string | tipo
    }

    HORARIO_LIVRE {
        string | codigo_empregado PK
        int    | horas_mensais
        int    | horas_minimas_dia
    }

    HORARIO_FIXO {
        string | codigo_empregado PK
    }

    DIA_SEMANA {
        string | codigo PK
        string | nome
    }

    TURNO {
        string | id PK
        time   | horario_inicio
        time   | horario_fim
    }

    PONTO {
        string | empregado_id
        string | dia_id
        string | turno_id
        time   | entrada
        time   | saida
    }

    EMPREGADO ||--|| HORARIO_LIVRE : possui
    EMPREGADO ||--|| HORARIO_FIXO : possui

    EMPREGADO ||--o{ PONTO : registra
    DIA_SEMANA ||--o{ PONTO : ocorre_em
    TURNO ||--o{ PONTO : no_turno
