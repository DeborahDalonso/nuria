/*
	Objetivo
    b) Suponha que você precise obter todos os prontuários associados ao paciente de ID 123, incluindo os detalhes do atendimento relacionado a cada 
    prontuário. A consulta deve retornar o nome do paciente, a descrição do prontuário e a data do atendimento correspondente.
    
    Trabalhei com INNER por entender que não haveria prontuario e nem atendimento sem pacientes e nao haveria prontuario sem atendimento, 
    prontuario depende de um paciente ser atendido 
*/
SELECT 
    pa.nome_paciente,
    pr.descricao_prontuario,
    at.data_atendimento
FROM
    prontuario pr
        INNER JOIN
    pacientes pa ON pa.id_paciente = pr.id_paciente
        INNER JOIN
    atendimento at ON at.id_atendimento = pr.id_atendimento
WHERE
    pa.id_paciente = 123
