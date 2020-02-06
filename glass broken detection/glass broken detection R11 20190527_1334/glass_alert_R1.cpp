#pragma once

#include "glass_alert_R1.h"
//glass broken detection R11 20190527_1334

//Sine and Cosine Table
static float cos_array[901] =
{
	1	,
0.999998477	,
0.999993908	,
0.999986292	,
0.999975631	,
0.999961923	,
0.999945169	,
0.99992537	,
0.999902524	,
0.999876632	,
0.999847695	,
0.999815712	,
0.999780683	,
0.999742609	,
0.99970149	,
0.999657325	,
0.999610115	,
0.99955986	,
0.99950656	,
0.999450216	,
0.999390827	,
0.999328394	,
0.999262916	,
0.999194395	,
0.99912283	,
0.999048222	,
0.99897057	,
0.998889875	,
0.998806137	,
0.998719357	,
0.998629535	,
0.99853667	,
0.998440764	,
0.998341817	,
0.998239828	,
0.998134798	,
0.998026728	,
0.997915618	,
0.997801468	,
0.997684279	,
0.99756405	,
0.997440783	,
0.997314477	,
0.997185134	,
0.997052752	,
0.996917334	,
0.996778878	,
0.996637387	,
0.996492859	,
0.996345296	,
0.996194698	,
0.996041065	,
0.995884399	,
0.995724698	,
0.995561965	,
0.995396198	,
0.9952274	,
0.99505557	,
0.994880709	,
0.994702817	,
0.994521895	,
0.994337944	,
0.994150964	,
0.993960955	,
0.993767919	,
0.993571856	,
0.993372766	,
0.99317065	,
0.992965508	,
0.992757342	,
0.992546152	,
0.992331938	,
0.992114701	,
0.991894443	,
0.991671162	,
0.991444861	,
0.99121554	,
0.9909832	,
0.99074784	,
0.990509463	,
0.990268069	,
0.990023658	,
0.989776231	,
0.989525789	,
0.989272333	,
0.989015863	,
0.988756381	,
0.988493887	,
0.988228381	,
0.987959866	,
0.987688341	,
0.987413807	,
0.987136265	,
0.986855716	,
0.986572162	,
0.986285602	,
0.985996037	,
0.985703469	,
0.985407898	,
0.985109326	,
0.984807753	,
0.98450318	,
0.984195608	,
0.983885038	,
0.983571471	,
0.983254908	,
0.982935349	,
0.982612797	,
0.982287251	,
0.981958713	,
0.981627183	,
0.981292664	,
0.980955155	,
0.980614659	,
0.980271175	,
0.979924705	,
0.97957525	,
0.979222811	,
0.978867389	,
0.978508985	,
0.978147601	,
0.977783237	,
0.977415894	,
0.977045574	,
0.976672278	,
0.976296007	,
0.975916762	,
0.975534544	,
0.975149354	,
0.974761194	,
0.974370065	,
0.973975967	,
0.973578903	,
0.973178873	,
0.972775878	,
0.97236992	,
0.971961001	,
0.97154912	,
0.97113428	,
0.970716482	,
0.970295726	,
0.969872015	,
0.96944535	,
0.969015731	,
0.968583161	,
0.96814764	,
0.96770917	,
0.967267753	,
0.966823389	,
0.966376079	,
0.965925826	,
0.965472631	,
0.965016494	,
0.964557418	,
0.964095404	,
0.963630453	,
0.963162567	,
0.962691746	,
0.962217994	,
0.96174131	,
0.961261696	,
0.960779154	,
0.960293686	,
0.959805292	,
0.959313975	,
0.958819735	,
0.958322574	,
0.957822495	,
0.957319498	,
0.956813584	,
0.956304756	,
0.955793015	,
0.955278362	,
0.9547608	,
0.954240329	,
0.953716951	,
0.953190668	,
0.952661481	,
0.952129393	,
0.951594404	,
0.951056516	,
0.950515732	,
0.949972052	,
0.949425478	,
0.948876012	,
0.948323655	,
0.94776841	,
0.947210278	,
0.94664926	,
0.946085359	,
0.945518576	,
0.944948912	,
0.94437637	,
0.943800952	,
0.943222658	,
0.942641491	,
0.942057453	,
0.941470545	,
0.940880769	,
0.940288127	,
0.939692621	,
0.939094252	,
0.938493023	,
0.937888935	,
0.937281989	,
0.936672189	,
0.936059536	,
0.935444031	,
0.934825676	,
0.934204474	,
0.933580426	,
0.932953535	,
0.932323801	,
0.931691228	,
0.931055816	,
0.930417568	,
0.929776486	,
0.929132572	,
0.928485827	,
0.927836254	,
0.927183855	,
0.926528631	,
0.925870585	,
0.925209718	,
0.924546034	,
0.923879533	,
0.923210217	,
0.922538089	,
0.921863152	,
0.921185406	,
0.920504853	,
0.919821497	,
0.919135339	,
0.918446381	,
0.917754626	,
0.917060074	,
0.91636273	,
0.915662593	,
0.914959668	,
0.914253955	,
0.913545458	,
0.912834177	,
0.912120116	,
0.911403277	,
0.910683661	,
0.909961271	,
0.909236109	,
0.908508178	,
0.907777479	,
0.907044014	,
0.906307787	,
0.905568799	,
0.904827052	,
0.90408255	,
0.903335293	,
0.902585284	,
0.901832526	,
0.901077021	,
0.900318771	,
0.899557779	,
0.898794046	,
0.898027576	,
0.89725837	,
0.89648643	,
0.89571176	,
0.894934362	,
0.894154237	,
0.893371388	,
0.892585818	,
0.89179753	,
0.891006524	,
0.890212805	,
0.889416373	,
0.888617233	,
0.887815385	,
0.887010833	,
0.886203579	,
0.885393626	,
0.884580975	,
0.88376563	,
0.882947593	,
0.882126866	,
0.881303452	,
0.880477354	,
0.879648573	,
0.878817113	,
0.877982975	,
0.877146164	,
0.87630668	,
0.875464527	,
0.874619707	,
0.873772223	,
0.872922077	,
0.872069272	,
0.871213811	,
0.870355696	,
0.86949493	,
0.868631514	,
0.867765453	,
0.866896749	,
0.866025404	,
0.865151421	,
0.864274802	,
0.863395551	,
0.862513669	,
0.86162916	,
0.860742027	,
0.859852272	,
0.858959897	,
0.858064906	,
0.857167301	,
0.856267085	,
0.85536426	,
0.85445883	,
0.853550797	,
0.852640164	,
0.851726934	,
0.850811109	,
0.849892693	,
0.848971688	,
0.848048096	,
0.847121921	,
0.846193166	,
0.845261833	,
0.844327926	,
0.843391446	,
0.842452397	,
0.841510782	,
0.840566603	,
0.839619865	,
0.838670568	,
0.837718717	,
0.836764313	,
0.835807361	,
0.834847863	,
0.833885822	,
0.832921241	,
0.831954122	,
0.830984469	,
0.830012285	,
0.829037573	,
0.828060335	,
0.827080574	,
0.826098294	,
0.825113498	,
0.824126189	,
0.823136369	,
0.822144041	,
0.821149209	,
0.820151876	,
0.819152044	,
0.818149717	,
0.817144898	,
0.81613759	,
0.815127796	,
0.814115518	,
0.813100761	,
0.812083527	,
0.811063819	,
0.81004164	,
0.809016994	,
0.807989884	,
0.806960312	,
0.805928282	,
0.804893797	,
0.803856861	,
0.802817475	,
0.801775644	,
0.800731371	,
0.799684658	,
0.79863551	,
0.797583929	,
0.796529918	,
0.795473481	,
0.794414621	,
0.79335334	,
0.792289643	,
0.791223533	,
0.790155012	,
0.789084085	,
0.788010754	,
0.786935022	,
0.785856893	,
0.784776371	,
0.783693457	,
0.782608157	,
0.781520472	,
0.780430407	,
0.779337965	,
0.778243149	,
0.777145961	,
0.776046407	,
0.774944489	,
0.77384021	,
0.772733573	,
0.771624583	,
0.770513243	,
0.769399555	,
0.768283524	,
0.767165152	,
0.766044443	,
0.764921401	,
0.763796029	,
0.76266833	,
0.761538308	,
0.760405966	,
0.759271307	,
0.758134336	,
0.756995056	,
0.755853469	,
0.75470958	,
0.753563392	,
0.752414909	,
0.751264134	,
0.75011107	,
0.748955721	,
0.74779809	,
0.746638182	,
0.745476	,
0.744311546	,
0.743144825	,
0.741975841	,
0.740804596	,
0.739631095	,
0.738455341	,
0.737277337	,
0.736097087	,
0.734914595	,
0.733729865	,
0.732542899	,
0.731353702	,
0.730162277	,
0.728968627	,
0.727772758	,
0.726574671	,
0.725374371	,
0.724171861	,
0.722967146	,
0.721760228	,
0.720551112	,
0.7193398	,
0.718126298	,
0.716910608	,
0.715692734	,
0.71447268	,
0.713250449	,
0.712026046	,
0.710799474	,
0.709570737	,
0.708339838	,
0.707106781	,
0.705871571	,
0.70463421	,
0.703394703	,
0.702153053	,
0.700909264	,
0.699663341	,
0.698415285	,
0.697165103	,
0.695912797	,
0.69465837	,
0.693401828	,
0.692143174	,
0.690882411	,
0.689619544	,
0.688354576	,
0.687087511	,
0.685818353	,
0.684547106	,
0.683273774	,
0.68199836	,
0.680720869	,
0.679441304	,
0.67815967	,
0.67687597	,
0.675590208	,
0.674302388	,
0.673012514	,
0.671720589	,
0.670426619	,
0.669130606	,
0.667832555	,
0.66653247	,
0.665230355	,
0.663926213	,
0.662620048	,
0.661311865	,
0.660001668	,
0.65868946	,
0.657375246	,
0.656059029	,
0.654740814	,
0.653420604	,
0.652098404	,
0.650774217	,
0.649448048	,
0.648119901	,
0.64678978	,
0.645457688	,
0.64412363	,
0.64278761	,
0.641449632	,
0.640109699	,
0.638767818	,
0.63742399	,
0.63607822	,
0.634730513	,
0.633380873	,
0.632029303	,
0.630675807	,
0.629320391	,
0.627963058	,
0.626603811	,
0.625242656	,
0.623879597	,
0.622514637	,
0.62114778	,
0.619779032	,
0.618408395	,
0.617035875	,
0.615661475	,
0.6142852	,
0.612907054	,
0.61152704	,
0.610145164	,
0.608761429	,
0.60737584	,
0.6059884	,
0.604599115	,
0.603207988	,
0.601815023	,
0.600420225	,
0.599023599	,
0.597625147	,
0.596224875	,
0.594822787	,
0.593418887	,
0.592013179	,
0.590605668	,
0.589196357	,
0.587785252	,
0.586372357	,
0.584957675	,
0.583541211	,
0.58212297	,
0.580702956	,
0.579281172	,
0.577857624	,
0.576432316	,
0.575005252	,
0.573576436	,
0.572145873	,
0.570713568	,
0.569279523	,
0.567843745	,
0.566406237	,
0.564967003	,
0.563526049	,
0.562083378	,
0.560638995	,
0.559192903	,
0.557745109	,
0.556295615	,
0.554844427	,
0.553391549	,
0.551936985	,
0.55048074	,
0.549022818	,
0.547563223	,
0.546101961	,
0.544639035	,
0.54317445	,
0.54170821	,
0.54024032	,
0.538770785	,
0.537299608	,
0.535826795	,
0.534352349	,
0.532876276	,
0.53139858	,
0.529919264	,
0.528438335	,
0.526955795	,
0.525471651	,
0.523985906	,
0.522498565	,
0.521009632	,
0.519519112	,
0.518027009	,
0.516533329	,
0.515038075	,
0.513541252	,
0.512042865	,
0.510542918	,
0.509041416	,
0.507538363	,
0.506033764	,
0.504527624	,
0.503019947	,
0.501510737	,
0.5	,
0.49848774	,
0.496973961	,
0.495458668	,
0.493941867	,
0.49242356	,
0.490903754	,
0.489382452	,
0.487859659	,
0.48633538	,
0.48480962	,
0.483282383	,
0.481753674	,
0.480223497	,
0.478691858	,
0.47715876	,
0.475624209	,
0.474088209	,
0.472550765	,
0.471011881	,
0.469471563	,
0.467929814	,
0.46638664	,
0.464842046	,
0.463296035	,
0.461748613	,
0.460199785	,
0.458649554	,
0.457097927	,
0.455544907	,
0.4539905	,
0.452434709	,
0.450877541	,
0.449318999	,
0.447759088	,
0.446197813	,
0.444635179	,
0.443071191	,
0.441505853	,
0.43993917	,
0.438371147	,
0.436801788	,
0.435231099	,
0.433659085	,
0.432085749	,
0.430511097	,
0.428935133	,
0.427357863	,
0.425779292	,
0.424199423	,
0.422618262	,
0.421035813	,
0.419452082	,
0.417867074	,
0.416280792	,
0.414693243	,
0.41310443	,
0.411514359	,
0.409923034	,
0.40833046	,
0.406736643	,
0.405141587	,
0.403545296	,
0.401947777	,
0.400349033	,
0.398749069	,
0.397147891	,
0.395545503	,
0.39394191	,
0.392337117	,
0.390731128	,
0.38912395	,
0.387515586	,
0.385906042	,
0.384295323	,
0.382683432	,
0.381070376	,
0.37945616	,
0.377840787	,
0.376224263	,
0.374606593	,
0.372987783	,
0.371367836	,
0.369746757	,
0.368124553	,
0.366501227	,
0.364876784	,
0.36325123	,
0.36162457	,
0.359996808	,
0.35836795	,
0.356737999	,
0.355106962	,
0.353474844	,
0.351841648	,
0.350207381	,
0.348572047	,
0.346935652	,
0.345298199	,
0.343659695	,
0.342020143	,
0.34037955	,
0.33873792	,
0.337095258	,
0.33545157	,
0.333806859	,
0.332161132	,
0.330514393	,
0.328866647	,
0.327217899	,
0.325568154	,
0.323917418	,
0.322265695	,
0.320612991	,
0.318959309	,
0.317304656	,
0.315649037	,
0.313992456	,
0.312334919	,
0.31067643	,
0.309016994	,
0.307356618	,
0.305695305	,
0.304033061	,
0.302369891	,
0.3007058	,
0.299040792	,
0.297374874	,
0.29570805	,
0.294040325	,
0.292371705	,
0.290702194	,
0.289031797	,
0.28736052	,
0.285688367	,
0.284015345	,
0.282341457	,
0.280666709	,
0.278991106	,
0.277314653	,
0.275637356	,
0.273959219	,
0.272280247	,
0.270600446	,
0.268919821	,
0.267238376	,
0.265556117	,
0.26387305	,
0.262189179	,
0.260504509	,
0.258819045	,
0.257132793	,
0.255445758	,
0.253757945	,
0.252069358	,
0.250380004	,
0.248689887	,
0.246999013	,
0.245307386	,
0.243615012	,
0.241921896	,
0.240228042	,
0.238533458	,
0.236838146	,
0.235142113	,
0.233445364	,
0.231747903	,
0.230049737	,
0.22835087	,
0.226651307	,
0.224951054	,
0.223250116	,
0.221548498	,
0.219846204	,
0.218143241	,
0.216439614	,
0.214735327	,
0.213030386	,
0.211324796	,
0.209618563	,
0.207911691	,
0.206204185	,
0.204496052	,
0.202787295	,
0.201077921	,
0.199367934	,
0.19765734	,
0.195946144	,
0.194234351	,
0.192521967	,
0.190808995	,
0.189095443	,
0.187381315	,
0.185666615	,
0.183951351	,
0.182235525	,
0.180519145	,
0.178802215	,
0.17708474	,
0.175366726	,
0.173648178	,
0.1719291	,
0.170209499	,
0.16848938	,
0.166768747	,
0.165047606	,
0.163325962	,
0.161603821	,
0.159881188	,
0.158158067	,
0.156434465	,
0.154710386	,
0.152985836	,
0.15126082	,
0.149535343	,
0.147809411	,
0.146083029	,
0.144356201	,
0.142628934	,
0.140901232	,
0.139173101	,
0.137444546	,
0.135715572	,
0.133986185	,
0.13225639	,
0.130526192	,
0.128795597	,
0.127064609	,
0.125333234	,
0.123601477	,
0.121869343	,
0.120136839	,
0.118403968	,
0.116670737	,
0.11493715	,
0.113203214	,
0.111468932	,
0.109734311	,
0.107999356	,
0.106264071	,
0.104528463	,
0.102792537	,
0.101056297	,
0.09931975	,
0.0975829	,
0.095845753	,
0.094108313	,
0.092370587	,
0.09063258	,
0.088894297	,
0.087155743	,
0.085416923	,
0.083677843	,
0.081938509	,
0.080198924	,
0.078459096	,
0.076719028	,
0.074978727	,
0.073238197	,
0.071497444	,
0.069756474	,
0.068015291	,
0.0662739	,
0.064532308	,
0.06279052	,
0.06104854	,
0.059306374	,
0.057564027	,
0.055821505	,
0.054078813	,
0.052335956	,
0.05059294	,
0.04884977	,
0.047106451	,
0.045362988	,
0.043619387	,
0.041875654	,
0.040131793	,
0.038387809	,
0.036643709	,
0.034899497	,
0.033155178	,
0.031410759	,
0.029666244	,
0.027921639	,
0.026176948	,
0.024432178	,
0.022687334	,
0.02094242	,
0.019197442	,
0.017452406	,
0.015707317	,
0.01396218	,
0.012217001	,
0.010471784	,
0.008726535	,
0.00698126	,
0.005235964	,
0.003490651	,
0.001745328	,
0
};
static float sin_array[901] =
{
	0	,
0.001745328	,
0.003490651	,
0.005235964	,
0.00698126	,
0.008726535	,
0.010471784	,
0.012217001	,
0.01396218	,
0.015707317	,
0.017452406	,
0.019197442	,
0.02094242	,
0.022687334	,
0.024432178	,
0.026176948	,
0.027921639	,
0.029666244	,
0.031410759	,
0.033155178	,
0.034899497	,
0.036643709	,
0.038387809	,
0.040131793	,
0.041875654	,
0.043619387	,
0.045362988	,
0.047106451	,
0.04884977	,
0.05059294	,
0.052335956	,
0.054078813	,
0.055821505	,
0.057564027	,
0.059306374	,
0.06104854	,
0.06279052	,
0.064532308	,
0.0662739	,
0.068015291	,
0.069756474	,
0.071497444	,
0.073238197	,
0.074978727	,
0.076719028	,
0.078459096	,
0.080198924	,
0.081938509	,
0.083677843	,
0.085416923	,
0.087155743	,
0.088894297	,
0.09063258	,
0.092370587	,
0.094108313	,
0.095845753	,
0.0975829	,
0.09931975	,
0.101056297	,
0.102792537	,
0.104528463	,
0.106264071	,
0.107999356	,
0.109734311	,
0.111468932	,
0.113203214	,
0.11493715	,
0.116670737	,
0.118403968	,
0.120136839	,
0.121869343	,
0.123601477	,
0.125333234	,
0.127064609	,
0.128795597	,
0.130526192	,
0.13225639	,
0.133986185	,
0.135715572	,
0.137444546	,
0.139173101	,
0.140901232	,
0.142628934	,
0.144356201	,
0.146083029	,
0.147809411	,
0.149535343	,
0.15126082	,
0.152985836	,
0.154710386	,
0.156434465	,
0.158158067	,
0.159881188	,
0.161603821	,
0.163325962	,
0.165047606	,
0.166768747	,
0.16848938	,
0.170209499	,
0.1719291	,
0.173648178	,
0.175366726	,
0.17708474	,
0.178802215	,
0.180519145	,
0.182235525	,
0.183951351	,
0.185666615	,
0.187381315	,
0.189095443	,
0.190808995	,
0.192521967	,
0.194234351	,
0.195946144	,
0.19765734	,
0.199367934	,
0.201077921	,
0.202787295	,
0.204496052	,
0.206204185	,
0.207911691	,
0.209618563	,
0.211324796	,
0.213030386	,
0.214735327	,
0.216439614	,
0.218143241	,
0.219846204	,
0.221548498	,
0.223250116	,
0.224951054	,
0.226651307	,
0.22835087	,
0.230049737	,
0.231747903	,
0.233445364	,
0.235142113	,
0.236838146	,
0.238533458	,
0.240228042	,
0.241921896	,
0.243615012	,
0.245307386	,
0.246999013	,
0.248689887	,
0.250380004	,
0.252069358	,
0.253757945	,
0.255445758	,
0.257132793	,
0.258819045	,
0.260504509	,
0.262189179	,
0.26387305	,
0.265556117	,
0.267238376	,
0.268919821	,
0.270600446	,
0.272280247	,
0.273959219	,
0.275637356	,
0.277314653	,
0.278991106	,
0.280666709	,
0.282341457	,
0.284015345	,
0.285688367	,
0.28736052	,
0.289031797	,
0.290702194	,
0.292371705	,
0.294040325	,
0.29570805	,
0.297374874	,
0.299040792	,
0.3007058	,
0.302369891	,
0.304033061	,
0.305695305	,
0.307356618	,
0.309016994	,
0.31067643	,
0.312334919	,
0.313992456	,
0.315649037	,
0.317304656	,
0.318959309	,
0.320612991	,
0.322265695	,
0.323917418	,
0.325568154	,
0.327217899	,
0.328866647	,
0.330514393	,
0.332161132	,
0.333806859	,
0.33545157	,
0.337095258	,
0.33873792	,
0.34037955	,
0.342020143	,
0.343659695	,
0.345298199	,
0.346935652	,
0.348572047	,
0.350207381	,
0.351841648	,
0.353474844	,
0.355106962	,
0.356737999	,
0.35836795	,
0.359996808	,
0.36162457	,
0.36325123	,
0.364876784	,
0.366501227	,
0.368124553	,
0.369746757	,
0.371367836	,
0.372987783	,
0.374606593	,
0.376224263	,
0.377840787	,
0.37945616	,
0.381070376	,
0.382683432	,
0.384295323	,
0.385906042	,
0.387515586	,
0.38912395	,
0.390731128	,
0.392337117	,
0.39394191	,
0.395545503	,
0.397147891	,
0.398749069	,
0.400349033	,
0.401947777	,
0.403545296	,
0.405141587	,
0.406736643	,
0.40833046	,
0.409923034	,
0.411514359	,
0.41310443	,
0.414693243	,
0.416280792	,
0.417867074	,
0.419452082	,
0.421035813	,
0.422618262	,
0.424199423	,
0.425779292	,
0.427357863	,
0.428935133	,
0.430511097	,
0.432085749	,
0.433659085	,
0.435231099	,
0.436801788	,
0.438371147	,
0.43993917	,
0.441505853	,
0.443071191	,
0.444635179	,
0.446197813	,
0.447759088	,
0.449318999	,
0.450877541	,
0.452434709	,
0.4539905	,
0.455544907	,
0.457097927	,
0.458649554	,
0.460199785	,
0.461748613	,
0.463296035	,
0.464842046	,
0.46638664	,
0.467929814	,
0.469471563	,
0.471011881	,
0.472550765	,
0.474088209	,
0.475624209	,
0.47715876	,
0.478691858	,
0.480223497	,
0.481753674	,
0.483282383	,
0.48480962	,
0.48633538	,
0.487859659	,
0.489382452	,
0.490903754	,
0.49242356	,
0.493941867	,
0.495458668	,
0.496973961	,
0.49848774	,
0.5	,
0.501510737	,
0.503019947	,
0.504527624	,
0.506033764	,
0.507538363	,
0.509041416	,
0.510542918	,
0.512042865	,
0.513541252	,
0.515038075	,
0.516533329	,
0.518027009	,
0.519519112	,
0.521009632	,
0.522498565	,
0.523985906	,
0.525471651	,
0.526955795	,
0.528438335	,
0.529919264	,
0.53139858	,
0.532876276	,
0.534352349	,
0.535826795	,
0.537299608	,
0.538770785	,
0.54024032	,
0.54170821	,
0.54317445	,
0.544639035	,
0.546101961	,
0.547563223	,
0.549022818	,
0.55048074	,
0.551936985	,
0.553391549	,
0.554844427	,
0.556295616	,
0.557745109	,
0.559192903	,
0.560638995	,
0.562083378	,
0.563526049	,
0.564967003	,
0.566406237	,
0.567843745	,
0.569279523	,
0.570713568	,
0.572145873	,
0.573576436	,
0.575005252	,
0.576432316	,
0.577857624	,
0.579281172	,
0.580702956	,
0.58212297	,
0.583541211	,
0.584957675	,
0.586372357	,
0.587785252	,
0.589196357	,
0.590605668	,
0.592013179	,
0.593418887	,
0.594822787	,
0.596224875	,
0.597625147	,
0.599023599	,
0.600420225	,
0.601815023	,
0.603207988	,
0.604599115	,
0.6059884	,
0.60737584	,
0.608761429	,
0.610145164	,
0.61152704	,
0.612907054	,
0.6142852	,
0.615661475	,
0.617035875	,
0.618408395	,
0.619779032	,
0.62114778	,
0.622514637	,
0.623879597	,
0.625242656	,
0.626603811	,
0.627963058	,
0.629320391	,
0.630675807	,
0.632029303	,
0.633380873	,
0.634730513	,
0.63607822	,
0.63742399	,
0.638767818	,
0.640109699	,
0.641449632	,
0.64278761	,
0.64412363	,
0.645457688	,
0.64678978	,
0.648119901	,
0.649448048	,
0.650774217	,
0.652098404	,
0.653420604	,
0.654740814	,
0.656059029	,
0.657375246	,
0.65868946	,
0.660001668	,
0.661311865	,
0.662620048	,
0.663926213	,
0.665230355	,
0.66653247	,
0.667832555	,
0.669130606	,
0.670426619	,
0.671720589	,
0.673012514	,
0.674302388	,
0.675590208	,
0.67687597	,
0.67815967	,
0.679441304	,
0.680720869	,
0.68199836	,
0.683273774	,
0.684547106	,
0.685818353	,
0.687087511	,
0.688354576	,
0.689619544	,
0.690882411	,
0.692143174	,
0.693401828	,
0.69465837	,
0.695912797	,
0.697165103	,
0.698415285	,
0.699663341	,
0.700909264	,
0.702153053	,
0.703394703	,
0.70463421	,
0.705871571	,
0.707106781	,
0.708339838	,
0.709570737	,
0.710799474	,
0.712026046	,
0.713250449	,
0.71447268	,
0.715692734	,
0.716910608	,
0.718126298	,
0.7193398	,
0.720551112	,
0.721760228	,
0.722967146	,
0.724171861	,
0.725374371	,
0.726574671	,
0.727772758	,
0.728968627	,
0.730162277	,
0.731353702	,
0.732542899	,
0.733729865	,
0.734914595	,
0.736097087	,
0.737277337	,
0.738455341	,
0.739631095	,
0.740804596	,
0.741975841	,
0.743144825	,
0.744311546	,
0.745476	,
0.746638182	,
0.74779809	,
0.748955721	,
0.75011107	,
0.751264134	,
0.752414909	,
0.753563392	,
0.75470958	,
0.755853469	,
0.756995056	,
0.758134336	,
0.759271307	,
0.760405966	,
0.761538308	,
0.76266833	,
0.763796029	,
0.764921401	,
0.766044443	,
0.767165152	,
0.768283524	,
0.769399555	,
0.770513243	,
0.771624583	,
0.772733573	,
0.77384021	,
0.774944489	,
0.776046407	,
0.777145961	,
0.778243149	,
0.779337965	,
0.780430407	,
0.781520472	,
0.782608157	,
0.783693457	,
0.784776371	,
0.785856893	,
0.786935022	,
0.788010754	,
0.789084085	,
0.790155012	,
0.791223533	,
0.792289643	,
0.79335334	,
0.794414621	,
0.795473481	,
0.796529918	,
0.797583929	,
0.79863551	,
0.799684658	,
0.800731371	,
0.801775644	,
0.802817475	,
0.803856861	,
0.804893797	,
0.805928282	,
0.806960312	,
0.807989884	,
0.809016994	,
0.81004164	,
0.811063819	,
0.812083527	,
0.813100761	,
0.814115518	,
0.815127796	,
0.81613759	,
0.817144898	,
0.818149717	,
0.819152044	,
0.820151876	,
0.821149209	,
0.822144041	,
0.823136369	,
0.824126189	,
0.825113498	,
0.826098294	,
0.827080574	,
0.828060335	,
0.829037573	,
0.830012285	,
0.830984469	,
0.831954122	,
0.832921241	,
0.833885822	,
0.834847863	,
0.835807361	,
0.836764313	,
0.837718717	,
0.838670568	,
0.839619865	,
0.840566603	,
0.841510782	,
0.842452397	,
0.843391446	,
0.844327926	,
0.845261833	,
0.846193166	,
0.847121921	,
0.848048096	,
0.848971688	,
0.849892693	,
0.850811109	,
0.851726934	,
0.852640164	,
0.853550797	,
0.85445883	,
0.85536426	,
0.856267085	,
0.857167301	,
0.858064906	,
0.858959897	,
0.859852272	,
0.860742027	,
0.86162916	,
0.862513669	,
0.863395551	,
0.864274802	,
0.865151421	,
0.866025404	,
0.866896749	,
0.867765453	,
0.868631514	,
0.86949493	,
0.870355696	,
0.871213811	,
0.872069272	,
0.872922077	,
0.873772223	,
0.874619707	,
0.875464527	,
0.87630668	,
0.877146164	,
0.877982975	,
0.878817113	,
0.879648573	,
0.880477354	,
0.881303452	,
0.882126866	,
0.882947593	,
0.88376563	,
0.884580975	,
0.885393626	,
0.886203579	,
0.887010833	,
0.887815385	,
0.888617233	,
0.889416373	,
0.890212805	,
0.891006524	,
0.89179753	,
0.892585818	,
0.893371388	,
0.894154237	,
0.894934362	,
0.89571176	,
0.89648643	,
0.89725837	,
0.898027576	,
0.898794046	,
0.899557779	,
0.900318771	,
0.901077021	,
0.901832526	,
0.902585284	,
0.903335293	,
0.90408255	,
0.904827052	,
0.905568799	,
0.906307787	,
0.907044014	,
0.907777479	,
0.908508178	,
0.909236109	,
0.909961271	,
0.910683661	,
0.911403277	,
0.912120116	,
0.912834177	,
0.913545458	,
0.914253955	,
0.914959668	,
0.915662593	,
0.91636273	,
0.917060074	,
0.917754626	,
0.918446381	,
0.919135339	,
0.919821497	,
0.920504853	,
0.921185406	,
0.921863152	,
0.922538089	,
0.923210217	,
0.923879533	,
0.924546034	,
0.925209718	,
0.925870585	,
0.926528631	,
0.927183855	,
0.927836254	,
0.928485827	,
0.929132572	,
0.929776486	,
0.930417568	,
0.931055816	,
0.931691228	,
0.932323801	,
0.932953535	,
0.933580426	,
0.934204474	,
0.934825676	,
0.935444031	,
0.936059536	,
0.936672189	,
0.937281989	,
0.937888935	,
0.938493023	,
0.939094252	,
0.939692621	,
0.940288127	,
0.940880769	,
0.941470545	,
0.942057453	,
0.942641491	,
0.943222658	,
0.943800952	,
0.94437637	,
0.944948912	,
0.945518576	,
0.946085359	,
0.94664926	,
0.947210278	,
0.94776841	,
0.948323655	,
0.948876012	,
0.949425478	,
0.949972052	,
0.950515732	,
0.951056516	,
0.951594404	,
0.952129393	,
0.952661481	,
0.953190668	,
0.953716951	,
0.954240329	,
0.9547608	,
0.955278362	,
0.955793015	,
0.956304756	,
0.956813584	,
0.957319498	,
0.957822495	,
0.958322574	,
0.958819735	,
0.959313975	,
0.959805292	,
0.960293686	,
0.960779154	,
0.961261696	,
0.96174131	,
0.962217994	,
0.962691746	,
0.963162567	,
0.963630453	,
0.964095404	,
0.964557418	,
0.965016494	,
0.965472631	,
0.965925826	,
0.966376079	,
0.966823389	,
0.967267753	,
0.96770917	,
0.96814764	,
0.968583161	,
0.969015731	,
0.96944535	,
0.969872015	,
0.970295726	,
0.970716482	,
0.97113428	,
0.97154912	,
0.971961001	,
0.97236992	,
0.972775878	,
0.973178873	,
0.973578903	,
0.973975967	,
0.974370065	,
0.974761194	,
0.975149354	,
0.975534544	,
0.975916762	,
0.976296007	,
0.976672278	,
0.977045574	,
0.977415894	,
0.977783237	,
0.978147601	,
0.978508985	,
0.978867389	,
0.979222811	,
0.97957525	,
0.979924705	,
0.980271175	,
0.980614659	,
0.980955155	,
0.981292664	,
0.981627183	,
0.981958713	,
0.982287251	,
0.982612797	,
0.982935349	,
0.983254908	,
0.983571471	,
0.983885038	,
0.984195608	,
0.98450318	,
0.984807753	,
0.985109326	,
0.985407898	,
0.985703469	,
0.985996037	,
0.986285602	,
0.986572162	,
0.986855716	,
0.987136265	,
0.987413807	,
0.987688341	,
0.987959866	,
0.988228381	,
0.988493887	,
0.988756381	,
0.989015863	,
0.989272333	,
0.989525789	,
0.989776231	,
0.990023658	,
0.990268069	,
0.990509463	,
0.99074784	,
0.9909832	,
0.99121554	,
0.991444861	,
0.991671162	,
0.991894443	,
0.992114701	,
0.992331938	,
0.992546152	,
0.992757342	,
0.992965508	,
0.99317065	,
0.993372766	,
0.993571856	,
0.993767919	,
0.993960955	,
0.994150964	,
0.994337944	,
0.994521895	,
0.994702817	,
0.994880709	,
0.99505557	,
0.9952274	,
0.995396198	,
0.995561965	,
0.995724698	,
0.995884399	,
0.996041065	,
0.996194698	,
0.996345296	,
0.996492859	,
0.996637387	,
0.996778878	,
0.996917334	,
0.997052752	,
0.997185134	,
0.997314477	,
0.997440783	,
0.99756405	,
0.997684279	,
0.997801468	,
0.997915618	,
0.998026728	,
0.998134798	,
0.998239828	,
0.998341817	,
0.998440764	,
0.99853667	,
0.998629535	,
0.998719357	,
0.998806137	,
0.998889875	,
0.99897057	,
0.999048222	,
0.99912283	,
0.999194395	,
0.999262916	,
0.999328394	,
0.999390827	,
0.999450216	,
0.99950656	,
0.99955986	,
0.999610115	,
0.999657325	,
0.99970149	,
0.999742609	,
0.999780683	,
0.999815712	,
0.999847695	,
0.999876632	,
0.999902524	,
0.99992537	,
0.999945169	,
0.999961923	,
0.999975631	,
0.999986292	,
0.999993908	,
0.999998477	,
1

};



glass_broken_alert_R1::glass_broken_alert_R1()
{
	input_data_size = 500;
	input_t_data = new short[input_data_size];
	sampling_rate = 44100;
	buffer_frequency_variance_threshold = 20;
	buffer_amplitude_threshold = 0; //
	max_buffer_amplitude_value = 0; // the maximum value in the buffer
	buffer_amplitude_threshold_rate = 0.1;
	frequency_detection_limited_max = 4410; 
	frequency_detection_limited_min = 17640;
}


void glass_broken_alert_R1::alert_initial()
{
	audio_alert_flag = 0;
}

//initial the arraies in FFT radix 2 Algorithm
void glass_broken_alert_R1::fft_array_initial()
{
	w_array = new double[input_data_size];
	output_data_Amplitude = new double[input_data_size];
	spectrum_x_axis = new float[input_data_size];
}
//FFT spectrum x axis
void glass_broken_alert_R1::fft_x_axis()
{
	for (int i(0); i < input_data_size; i++)
	{
		spectrum_x_axis[i] = i * sampling_rate / input_data_size;
	}
}

//FFT radix 2 Algorithm
void glass_broken_alert_R1::FFT_2_radix()
{
	//The data of input, must be the times of 2
	//printf("The number of Data= %d\n", input_data_size);
	if (input_data_size % 2 != 0)
	{
		input_data_size = input_data_size - 1;
		//printf("The data is not the times of 2\n");
		//printf("The last datum will be ignore\n");
	}

	//FFT variances definition
	//float* w_array = new float[input_data_size];
	//int* output_data_Amplitude = new int[input_data_size];
	//float output_re;
	//float output_im;

	//FFT Algorithm

	for (int k(0); k < input_data_size; k++) //original setting: for(int k(0);k< input_data_size;k++)
	{
		//
		output_re = 0;
		output_im = 0;

		for (int n(0); n < input_data_size / 2; n++)
		{
			//Even Point, x(0) x(2) x(4)
			w_array[2 * n] = 4 * PI * k * n / input_data_size;
			//printf("%f\n", 4 * PI * k * n / input_data_size);
			//output_re = output_re + input_t_data[2 * n] * cos_table(w_array[2 * n] * angle2radian);
			//output_im = output_im - input_t_data[2 * n] * sin_table(w_array[2 * n] * angle2radian);
			output_re = output_re + input_t_data[2 * n] * cos_table(int(w_array[2 * n] * angle2radian));
			output_im = output_im - input_t_data[2 * n] * sin_table(int(w_array[2 * n] * angle2radian));

			//
			/*
			printf("%f  ", w_array[2 * n]);
			printf("%f  ", angle2radian);
			printf("%f  ", w_array[2 * n] * angle2radian);
			printf("%f\n", cos_table(w_array[2 * n] * angle2radian));
			*/
			//Odd Point, x(1) x(3) x(5)
			w_array[2 * n + 1] = 2 * PI * (2 * n + 1) * k / input_data_size;
			//The input of cosine is in radian
			output_re = output_re + input_t_data[2 * n + 1] * cos_table(w_array[2 * n + 1] * angle2radian);
			output_im = output_im - input_t_data[2 * n + 1] * sin_table(w_array[2 * n + 1] * angle2radian);
			//output_re = output_re + input_t_data[2 * n + 1] * cos_table(int(w_array[2 * n + 1] * angle2radian));
			//output_im = output_im - input_t_data[2 * n + 1] * sin_table(int(w_array[2 * n + 1] * angle2radian));
		}

		//Check the complex number result
		//printf("k=%d  %f + %f i\n",k, output_re, output_im);
		//printf("%f + %f i\n", output_re, output_im);

		//To get the absolute value of complex number
		output_data_Amplitude[k] = sqrt_Iterative(output_re * output_re + output_im * output_im);
		//printf("%f  ", output_re * output_re + output_im * output_im); //check the result of absolute value		
		//printf("%f\n", output_data_Amplitude[k]); //check the result of absolute value		
	}

}
//T3T4_detection
void glass_broken_alert_R1::glass_broken_detection()
{
	//printf("glass_broken_detection()\n");
	//buffer_first_frequency, frequency_variance;
	buffer_reference_frequency = 0;
	buffer_frequency_variance = 0;


	/**/
	//printf("%d %d \n", frequency_detection_limited_max_point, frequency_detection_limited_min_point);
		

	//for (int i (frequency_detection_limited_max_point); i < frequency_detection_limited_min_point; i++)//Frequency Section1
	for (int i(frequency_detection_limited_min_point); i < frequency_detection_limited_max_point; i++)
	{
		//printf("%f\n", output_data_Amplitude[i]);
		//if (((i < 95) || (i > 110)) && (i < 145) || (i > 150)) //Frequency Section2
		if (1) //Frequency Section2
		{
			//printf("%f  %f\n", output_data_Amplitude[i], max_buffer_amplitude_value * 0.1);
			if (output_data_Amplitude[i] > max_buffer_amplitude_value * buffer_amplitude_threshold_rate) //max_buffer_data=1735173
			{
				if (buffer_reference_frequency == 0)
				{
					buffer_reference_frequency = i;
				}
				else
				{
					buffer_frequency_variance = buffer_frequency_variance + i - buffer_reference_frequency;
					//printf("%f\n", frequency_variance);
				}

				//
				if (buffer_frequency_variance > buffer_frequency_variance_threshold)
				{
					//printf("%d\n", relative_max_point_number);
					//printf("%d  %d\n", buffer_reference_frequency, buffer_frequency_variance);
					//printf("M:%f OUTPUT:%f %d\n", max_buffer_amplitude_value, output_data_Amplitude[i], i);
					//printf("\n");
					audio_alert_flag = 1;
				}
			}
		}
	}
}
//SQRT
int glass_broken_alert_R1::sqrt_Iterative(float input_value)
{
	double result_value(0);
	double trial_value(1);
	double check_value(0);

	for (int i(0);; i++)
	{
		result_value = 0.5 * (trial_value + input_value / trial_value);
		check_value = result_value - trial_value;
		//printf("i=%d , result_value=%f\n", i, result_value); //check the each result
		//printf("i=%d , result_value=%f\n", i, check_value); // check the each delt_value

		if (check_value < 0)
		{
			check_value = -check_value;
		}

		if (check_value < 0.1) //the accuracy of result
		{
			//printf("%.2lf , result_value=%f\n", input_value, result_value); // check the each delt_value
			return result_value;
			//break;
		}
		trial_value = result_value;
	}
}
//Sine_table
float glass_broken_alert_R1::sin_table(int input_value)
{
	float return_value = 0;
	int input_angle = int(input_value * 10);
	input_angle = input_angle % 3600;
	//printf("input_angle: %d\n", input_angle);
	if (input_angle < 901) { return_value = sin_array[input_angle]; return return_value; }
	if ((900 < input_angle) && (input_angle < 1801))
	{
		return_value = sin_array[1800 - input_angle]; return return_value;
	}
	if ((1800 < input_angle) && (input_angle < 2701))
	{
		return_value = -sin_array[input_angle - 1800]; return return_value;
	}
	if ((2700 < input_angle) && (input_angle < 3601))
	{
		return_value = -sin_array[3600 - input_angle]; return return_value;
	}
	return return_value;
}
//Cosine_table	
float glass_broken_alert_R1::cos_table(int input_value) //in degree
{
	float return_value = 0;

	int input_angle = int(input_value * 10);
	input_angle = input_angle % 3600;
	//printf("input_angle: %d\n", input_angle);
	if (input_angle < 901) { return_value = cos_array[input_angle]; return return_value; }
	if ((900 < input_angle) && (input_angle < 1801))
	{
		return_value = -cos_array[1800 - input_angle]; return return_value;
	}
	if ((1800 < input_angle) && (input_angle < 2701))
	{
		return_value = -cos_array[input_angle - 1800]; return return_value;
	}
	if ((2700 < input_angle) && (input_angle < 3601))
	{
		return_value = cos_array[3600 - input_angle]; return return_value;
	}
	return return_value;
}

glass_broken_alert_R1::~glass_broken_alert_R1()
{
	//release the momory space
	delete input_t_data;
	delete w_array;
	delete output_data_Amplitude;
	delete spectrum_x_axis;

	input_t_data = NULL;
	w_array = NULL;
	output_data_Amplitude = NULL;
	spectrum_x_axis = NULL;
}
