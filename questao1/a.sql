/*
	Objetivo 
	a) Escreva uma consulta SQL que retorne todos os atendimentos do paciente com a especialidade "Neurologia" nos últimos 6 meses.
    
    Como foi dito para encontrar todos os atendimentos DO PACIENTE e não DOS PACIENTES nos ultimos 6 meses utilizei como filtro o id do paciente desejado 
    e não retorno os valores de consulta de mais nenhum paciente.
    
    Para obter com precisão os 6 ultimos meses seria necessario usar a data e a hora para calculo, mas, como estamos falando de um sistema medico, consultas
    são avaliadas apenas com a data como parametro, por essa razao optei por usar apenas a data no filtro
*/

SELECT 
    *
FROM
    atendimento at
WHERE
    at.cd_especialidade = CD_NEUROLOGIA -- CD_NEUROLOGIA se refere a um codigo da especialidade, troque esse texto pelo valor hipotetico que voce desejar, por exemplo 1 ou neurologia
        AND id_paciente = ID_PACIENTE -- ID_PACIENTE se refere ao id do paciente desejado, troque esse texto pelo valor hipotetico que voce desejar, por exemplo 1
        AND at.data_atendimento 
			BETWEEN DATEADD(month, -6, CONVERT(date, GETDATE())) AND CONVERT(date, GETDATE())