// generated from file './/CreamMachine.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "12ax7_table.h"

namespace CreamMachine {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec2[2];
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fRec4[6];
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec5[2];
	double 	fRec1[4];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec6[2];
	double 	fConst169;
	double 	fRec0[10];
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	average MA;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "CreamMachine";
	name = N_("CreamMachine");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
	MA = (average) {0.0,0.0,0.0};
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<6; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<4; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<10; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.29829559499166e-43 * fConst0);
	fConst2 = (2.30165048565439e-14 + (fConst0 * ((fConst0 * (9.08607021260318e-17 + (fConst0 * ((fConst0 * (2.33311674112368e-22 + (fConst0 * ((fConst0 * (5.25696504487829e-30 + (fConst0 * ((fConst0 * (1.45024687950133e-38 - fConst1)) - 3.46803822797196e-34)))) - 4.43569833420608e-26)))) - 2.50969304729451e-19)))) - 1.05851924287358e-14)));
	fConst3 = (2.06846603549249e-42 * fConst0);
	fConst4 = (2.07148543708895e-13 + (fConst0 * ((fConst0 * (4.54303510630159e-16 + (fConst0 * ((fConst0 * (2.33311674112368e-22 + (fConst0 * (4.43569833420608e-26 + (fConst0 * ((fConst0 * (1.73401911398598e-33 + (fConst0 * (fConst3 - 1.01517281565093e-37)))) - 1.57708951346349e-29)))))) - 7.52907914188352e-19)))) - 7.40963470011504e-14)));
	fConst5 = (8.27386414196997e-42 * fConst0);
	fConst6 = faustpower<2>(fConst0);
	fConst7 = (8.28594174835581e-13 + (fConst0 * ((fConst0 * (7.26885617008255e-16 + (fConst6 * ((fConst0 * (1.77427933368243e-25 + (fConst6 * ((fConst0 * (2.90049375900266e-37 - fConst5)) - 2.77443058237757e-33)))) - 9.33246696449473e-22)))) - 2.11703848574716e-13)));
	fConst8 = (1.93056829979299e-41 * fConst0);
	fConst9 = (1.93338640794969e-12 + (fConst0 * ((fConst6 * (2.0077544378356e-18 + (fConst0 * ((fConst0 * ((fConst0 * (4.20557203590263e-29 + (fConst6 * (fConst8 - 4.06069126260373e-37)))) - 1.77427933368243e-25)) - 9.33246696449473e-22)))) - 2.96385388004602e-13)));
	fConst10 = (2.89585244968949e-41 * fConst0);
	fConst11 = (2.90007961192453e-12 + (fConst0 * ((fConst0 * ((fConst0 * (1.5058158283767e-18 + (fConst0 * (1.39987004467421e-21 + (fConst0 * ((fConst0 * ((fConst0 * (4.85525351916074e-33 + (fConst0 * (2.03034563130187e-37 - fConst10)))) - 3.15417902692698e-29)) - 2.66141900052365e-25)))))) - 1.27204982976445e-15)) - 1.48192694002301e-13)));
	fConst12 = (2.90007961192453e-12 + (fConst0 * (1.48192694002301e-13 + (fConst0 * ((fConst0 * ((fConst0 * (1.39987004467421e-21 + (fConst0 * (2.66141900052365e-25 + (fConst0 * ((fConst0 * ((fConst0 * (2.03034563130187e-37 + fConst10)) - 4.85525351916074e-33)) - 3.15417902692698e-29)))))) - 1.5058158283767e-18)) - 1.27204982976445e-15)))));
	fConst13 = (1.93338640794969e-12 + (fConst0 * (2.96385388004602e-13 + (fConst6 * ((fConst0 * ((fConst0 * (1.77427933368243e-25 + (fConst0 * (4.20557203590263e-29 + (fConst6 * (0 - (4.06069126260373e-37 + fConst8))))))) - 9.33246696449473e-22)) - 2.0077544378356e-18)))));
	fConst14 = (8.28594174835581e-13 + (fConst0 * (2.11703848574716e-13 + (fConst0 * (7.26885617008255e-16 + (fConst6 * ((fConst0 * ((fConst6 * (2.77443058237757e-33 + (fConst0 * (2.90049375900266e-37 + fConst5)))) - 1.77427933368243e-25)) - 9.33246696449473e-22)))))));
	fConst15 = (2.07148543708895e-13 + (fConst0 * (7.40963470011504e-14 + (fConst0 * (4.54303510630159e-16 + (fConst0 * (7.52907914188352e-19 + (fConst0 * (2.33311674112368e-22 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.01517281565093e-37 + fConst3))) - 1.73401911398598e-33)) - 1.57708951346349e-29)) - 4.43569833420608e-26)))))))))));
	fConst16 = (2.30165048565439e-14 + (fConst0 * (1.05851924287358e-14 + (fConst0 * (9.08607021260318e-17 + (fConst0 * (2.50969304729451e-19 + (fConst0 * (2.33311674112368e-22 + (fConst0 * (4.43569833420608e-26 + (fConst0 * (5.25696504487829e-30 + (fConst0 * (3.46803822797196e-34 + (fConst0 * (1.45024687950133e-38 + fConst1)))))))))))))))));
	fConst17 = (1.0 / fConst16);
	fConst18 = (5.06021939965494e-15 * fConst0);
	fConst19 = (1.00639521931556e-07 + (fConst0 * ((fConst0 * (1.90954588996615e-10 - fConst18)) - 8.76546803412671e-09)));
	fConst20 = (1.51806581989648e-14 * fConst0);
	fConst21 = (3.01918565794667e-07 + (fConst0 * ((fConst0 * (fConst20 - 1.90954588996615e-10)) - 8.76546803412671e-09)));
	fConst22 = (3.01918565794667e-07 + (fConst0 * (8.76546803412671e-09 + (fConst0 * (0 - (1.90954588996615e-10 + fConst20))))));
	fConst23 = (1.00639521931556e-07 + (fConst0 * (8.76546803412671e-09 + (fConst0 * (1.90954588996615e-10 + fConst18)))));
	fConst24 = (1.0 / fConst23);
	fConst25 = (9.44931162927505e-22 * fConst0);
	fConst26 = ((fConst0 * (0 - (1.99946860421168e-18 + fConst25))) - 1.95849606354701e-17);
	fConst27 = (9.51209429251921e-22 * fConst0);
	fConst28 = (1.3996054549337e-15 + (fConst0 * (2.69441548619794e-18 + fConst27)));
	fConst29 = (1.21780274380656e-22 * fConst0);
	fConst30 = (7.71677288093279e-14 + (fConst0 * (3.62783135128241e-16 + (fConst0 * (4.30785277569968e-19 + fConst29)))));
	fConst31 = (3.77972465171002e-23 * fConst0);
	fConst32 = ((fConst0 * ((fConst0 * (0 - (8.42388550725314e-20 + fConst31))) - 2.29951550120932e-18)) - 1.57740747187715e-17);
	fConst33 = (3.80483771700768e-23 * fConst0);
	fConst34 = (1.58386849177418e-15 + (fConst0 * (6.03627788056499e-17 + (fConst0 * (1.11940117318399e-19 + fConst33)))));
	fConst35 = (4.87121097522623e-24 * fConst0);
	fConst36 = (9.73295014297089e-14 + (fConst0 * (4.5350299225951e-15 + (fConst0 * (1.69455322570577e-17 + (fConst0 * (1.80938202472913e-20 + fConst35)))))));
	fConst37 = (7.52698259638561e-18 + (fConst0 * (1.81725523026563e-18 + (fConst0 * (7.25847040630922e-20 + fConst31)))));
	fConst38 = ((fConst0 * ((fConst0 * (0 - (1.00208534357626e-19 + fConst33))) - 5.19516014972793e-17)) - 1.26088753084008e-15);
	fConst39 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.65918635299299e-20 + fConst35))) - 1.50578478497812e-17)) - 3.96748639715568e-15)) - 7.34984097742412e-14);
	fConst40 = (7.66601800327335e-20 * fConst0);
	fConst41 = (1.15904579525062e-17 + (fConst0 * (2.5518621970387e-17 - fConst40)));
	fConst42 = (1.03265771926447e-19 * fConst0);
	fConst43 = (1.74435132490524e-14 + (fConst0 * (fConst42 - 1.50041768291851e-16)));
	fConst44 = (5.16328859632234e-18 * fConst0);
	fConst45 = (fConst0 * (7.69373886467441e-15 - fConst44));
	fConst46 = (fConst45 - 9.35972217378587e-13);
	fConst47 = (3.06640720130934e-21 * fConst0);
	fConst48 = (1.70447911066268e-16 + (fConst0 * (3.74845005561448e-16 + (fConst0 * (fConst47 - 2.07144028749941e-18)))));
	fConst49 = (4.13063087705787e-21 * fConst0);
	fConst50 = (2.56532727185353e-13 + (fConst0 * ((fConst0 * (7.25123166620762e-18 - fConst49)) - 2.18080465833552e-15)));
	fConst51 = (5.11343733198803e-19 + (fConst0 * (1.12596473376237e-18 - fConst47)));
	fConst52 = (1.14564318252207e-15 + (fConst0 * (fConst49 - 5.97762047911477e-18)));
	fConst53 = (2.06531543852894e-19 * fConst0);
	fConst54 = ((fConst0 * (3.06547041959012e-16 - fConst53)) - 6.00970709605096e-14);
	fConst55 = ((fConst0 * (1.14218833635524e-13 + (fConst0 * (fConst53 - 3.70227601313654e-16)))) - 1.37637488731713e-11);
	fConst56 = ((fConst0 * (1.99946860421168e-18 - fConst25)) - 1.95849606354701e-17);
	fConst57 = (1.3996054549337e-15 + (fConst0 * (fConst27 - 2.69441548619794e-18)));
	fConst58 = ((fConst0 * (3.62783135128241e-16 + (fConst0 * (fConst29 - 4.30785277569968e-19)))) - 7.71677288093279e-14);
	fConst59 = ((fConst0 * (2.29951550120932e-18 + (fConst0 * (fConst31 - 8.42388550725314e-20)))) - 1.57740747187715e-17);
	fConst60 = (1.58386849177418e-15 + (fConst0 * ((fConst0 * (1.11940117318399e-19 - fConst33)) - 6.03627788056499e-17)));
	fConst61 = ((fConst0 * (4.5350299225951e-15 + (fConst0 * ((fConst0 * (1.80938202472913e-20 - fConst35)) - 1.69455322570577e-17)))) - 9.73295014297089e-14);
	fConst62 = (7.52698259638561e-18 + (fConst0 * ((fConst0 * (7.25847040630922e-20 - fConst31)) - 1.81725523026563e-18)));
	fConst63 = ((fConst0 * (5.19516014972793e-17 + (fConst0 * (fConst33 - 1.00208534357626e-19)))) - 1.26088753084008e-15);
	fConst64 = (7.34984097742412e-14 + (fConst0 * ((fConst0 * (1.50578478497812e-17 + (fConst0 * (fConst35 - 1.65918635299299e-20)))) - 3.96748639715568e-15)));
	fConst65 = (2.83479348878251e-21 * fConst0);
	fConst66 = ((fConst0 * (fConst65 - 1.99946860421168e-18)) - 1.95849606354701e-17);
	fConst67 = (2.85362828775576e-21 * fConst0);
	fConst68 = (1.3996054549337e-15 + (fConst0 * (2.69441548619794e-18 - fConst67)));
	fConst69 = (3.65340823141968e-22 * fConst0);
	fConst70 = ((fConst0 * (3.62783135128241e-16 + (fConst0 * (4.30785277569968e-19 - fConst69)))) - 2.31503186427984e-13);
	fConst71 = (1.88986232585501e-22 * fConst0);
	fConst72 = ((fConst0 * ((fConst0 * (2.52716565217594e-19 - fConst71)) - 2.29951550120932e-18)) - 1.57740747187715e-17);
	fConst73 = (1.90241885850384e-22 * fConst0);
	fConst74 = (1.58386849177418e-15 + (fConst0 * (6.03627788056499e-17 + (fConst0 * (fConst73 - 3.35820351955198e-19)))));
	fConst75 = (2.43560548761312e-23 * fConst0);
	fConst76 = ((fConst0 * (4.5350299225951e-15 + (fConst0 * (1.69455322570577e-17 + (fConst0 * (fConst75 - 5.42814607418739e-20)))))) - 2.91988504289127e-13);
	fConst77 = (7.52698259638561e-18 + (fConst0 * (1.81725523026563e-18 + (fConst0 * (fConst71 - 2.17754112189277e-19)))));
	fConst78 = ((fConst0 * ((fConst0 * (3.00625603072877e-19 - fConst73)) - 5.19516014972793e-17)) - 1.26088753084008e-15);
	fConst79 = (2.20495229322724e-13 + (fConst0 * ((fConst0 * ((fConst0 * (4.97755905897896e-20 - fConst75)) - 1.50578478497812e-17)) - 3.96748639715568e-15)));
	fConst80 = (1.88986232585501e-21 * fConst0);
	fConst81 = (3.91699212709402e-17 + (fConst0 * (0 - (3.99893720842337e-18 + fConst80))));
	fConst82 = (1.90241885850384e-21 * fConst0);
	fConst83 = ((fConst0 * (5.38883097239587e-18 + fConst82)) - 2.79921090986741e-15);
	fConst84 = (2.43560548761312e-22 * fConst0);
	fConst85 = ((fConst0 * ((fConst0 * (8.61570555139935e-19 + fConst84)) - 7.25566270256482e-16)) - 1.54335457618656e-13);
	fConst86 = (3.77972465171002e-22 * fConst0);
	fConst87 = (3.1548149437543e-17 + (fConst0 * ((fConst0 * (fConst86 - 1.68477710145063e-19)) - 4.59903100241864e-18)));
	fConst88 = (3.80483771700769e-22 * fConst0);
	fConst89 = ((fConst0 * (1.207255576113e-16 + (fConst0 * (2.23880234636799e-19 - fConst88)))) - 3.16773698354837e-15);
	fConst90 = (4.87121097522623e-23 * fConst0);
	fConst91 = ((fConst0 * ((fConst0 * (3.38910645141153e-17 + (fConst0 * (3.61876404945826e-20 - fConst90)))) - 9.07005984519019e-15)) - 1.94659002859418e-13);
	fConst92 = ((fConst0 * (3.63451046053126e-18 + (fConst0 * (1.45169408126184e-19 - fConst86)))) - 1.50539651927712e-17);
	fConst93 = (2.52177506168015e-15 + (fConst0 * ((fConst0 * (fConst88 - 2.00417068715251e-19)) - 1.03903202994559e-16)));
	fConst94 = (1.46996819548482e-13 + (fConst0 * (7.93497279431136e-15 + (fConst0 * ((fConst0 * (fConst90 - 3.31837270598598e-20)) - 3.01156956995625e-17)))));
	fConst95 = (3.91699212709402e-17 + (fConst0 * (3.99893720842337e-18 - fConst80)));
	fConst96 = ((fConst0 * (fConst82 - 5.38883097239587e-18)) - 2.79921090986741e-15);
	fConst97 = (1.54335457618656e-13 + (fConst0 * ((fConst0 * (fConst84 - 8.61570555139935e-19)) - 7.25566270256482e-16)));
	fConst98 = (3.1548149437543e-17 + (fConst0 * (4.59903100241864e-18 + (fConst0 * (0 - (1.68477710145063e-19 + fConst86))))));
	fConst99 = ((fConst0 * ((fConst0 * (2.23880234636799e-19 + fConst88)) - 1.207255576113e-16)) - 3.16773698354837e-15);
	fConst100 = (1.94659002859418e-13 + (fConst0 * ((fConst0 * ((fConst0 * (3.61876404945826e-20 + fConst90)) - 3.38910645141153e-17)) - 9.07005984519019e-15)));
	fConst101 = ((fConst0 * ((fConst0 * (1.45169408126184e-19 + fConst86)) - 3.63451046053126e-18)) - 1.50539651927712e-17);
	fConst102 = (2.52177506168015e-15 + (fConst0 * (1.03903202994559e-16 + (fConst0 * (0 - (2.00417068715251e-19 + fConst88))))));
	fConst103 = ((fConst0 * (7.93497279431136e-15 + (fConst0 * (3.01156956995625e-17 + (fConst0 * (0 - (3.31837270598598e-20 + fConst90))))))) - 1.46996819548482e-13);
	fConst104 = ((fConst0 * (1.99946860421168e-18 + fConst65)) - 1.95849606354701e-17);
	fConst105 = (1.3996054549337e-15 + (fConst0 * (0 - (2.69441548619794e-18 + fConst67))));
	fConst106 = (2.31503186427984e-13 + (fConst0 * (3.62783135128241e-16 + (fConst0 * (0 - (4.30785277569968e-19 + fConst69))))));
	fConst107 = ((fConst0 * (2.29951550120932e-18 + (fConst0 * (2.52716565217594e-19 + fConst71)))) - 1.57740747187715e-17);
	fConst108 = (1.58386849177418e-15 + (fConst0 * ((fConst0 * (0 - (3.35820351955198e-19 + fConst73))) - 6.03627788056499e-17)));
	fConst109 = (2.91988504289127e-13 + (fConst0 * (4.5350299225951e-15 + (fConst0 * ((fConst0 * (0 - (5.42814607418739e-20 + fConst75))) - 1.69455322570577e-17)))));
	fConst110 = (7.52698259638561e-18 + (fConst0 * ((fConst0 * (0 - (2.17754112189277e-19 + fConst71))) - 1.81725523026563e-18)));
	fConst111 = ((fConst0 * (5.19516014972793e-17 + (fConst0 * (3.00625603072877e-19 + fConst73)))) - 1.26088753084008e-15);
	fConst112 = ((fConst0 * ((fConst0 * (1.50578478497812e-17 + (fConst0 * (4.97755905897896e-20 + fConst75)))) - 3.96748639715568e-15)) - 2.20495229322724e-13);
	fConst113 = (2.299805400982e-19 * fConst0);
	fConst114 = (1.15904579525062e-17 + (fConst0 * (fConst113 - 2.5518621970387e-17)));
	fConst115 = (3.09797315779341e-19 * fConst0);
	fConst116 = (1.74435132490524e-14 + (fConst0 * (1.50041768291851e-16 - fConst115)));
	fConst117 = (fConst0 * (7.69373886467441e-15 + fConst44));
	fConst118 = (fConst117 - 2.80791665213576e-12);
	fConst119 = (1.53320360065467e-20 * fConst0);
	fConst120 = (1.70447911066268e-16 + (fConst0 * ((fConst0 * (6.21432086249824e-18 - fConst119)) - 3.74845005561448e-16)));
	fConst121 = (2.06531543852894e-20 * fConst0);
	fConst122 = (2.56532727185353e-13 + (fConst0 * (2.18080465833552e-15 + (fConst0 * (fConst121 - 2.17536949986228e-17)))));
	fConst123 = ((fConst0 * (fConst119 - 3.3778942012871e-18)) - 5.11343733198803e-19);
	fConst124 = ((fConst0 * (1.79328614373443e-17 - fConst121)) - 1.14564318252207e-15);
	fConst125 = (6.19594631558681e-19 * fConst0);
	fConst126 = ((fConst0 * (fConst125 - 3.06547041959012e-16)) - 6.00970709605096e-14);
	fConst127 = ((fConst0 * (1.14218833635524e-13 + (fConst0 * (3.70227601313654e-16 - fConst125)))) - 4.12912466195138e-11);
	fConst128 = (1.53320360065467e-19 * fConst0);
	fConst129 = ((fConst0 * (0 - (5.1037243940774e-17 + fConst128))) - 2.31809159050124e-17);
	fConst130 = ((fConst0 * (3.00083536583703e-16 + fConst53)) - 3.48870264981048e-14);
	fConst131 = (1.03265771926447e-17 * fConst0);
	fConst132 = ((fConst0 * (fConst131 - 1.53874777293488e-14)) - 1.87194443475717e-12);
	fConst133 = (3.06640720130934e-20 * fConst0);
	fConst134 = ((fConst0 * ((fConst0 * (fConst133 - 4.14288057499883e-18)) - 7.49690011122896e-16)) - 3.40895822132535e-16);
	fConst135 = (4.13063087705787e-20 * fConst0);
	fConst136 = ((fConst0 * (4.36160931667103e-15 + (fConst0 * (1.45024633324152e-17 - fConst135)))) - 5.13065454370705e-13);
	fConst137 = ((fConst0 * (2.25192946752474e-18 - fConst133)) - 1.02268746639761e-18);
	fConst138 = ((fConst0 * (fConst135 - 1.19552409582295e-17)) - 2.29128636504415e-15);
	fConst139 = (4.13063087705787e-19 * fConst0);
	fConst140 = (1.20194141921019e-13 + (fConst0 * (0 - (6.13094083918024e-16 + fConst139))));
	fConst141 = ((fConst0 * ((fConst0 * (7.40455202627308e-16 + fConst139)) - 2.28437667271049e-13)) - 2.75274977463425e-11);
	fConst142 = ((fConst0 * (5.1037243940774e-17 - fConst128)) - 2.31809159050124e-17);
	fConst143 = ((fConst0 * (fConst53 - 3.00083536583703e-16)) - 3.48870264981048e-14);
	fConst144 = (1.87194443475717e-12 + (fConst0 * (0 - (1.53874777293488e-14 + fConst131))));
	fConst145 = ((fConst0 * (7.49690011122896e-16 + (fConst0 * (0 - (4.14288057499883e-18 + fConst133))))) - 3.40895822132535e-16);
	fConst146 = ((fConst0 * ((fConst0 * (1.45024633324152e-17 + fConst135)) - 4.36160931667103e-15)) - 5.13065454370705e-13);
	fConst147 = (1.02268746639761e-18 + (fConst0 * (2.25192946752474e-18 + fConst133)));
	fConst148 = (2.29128636504415e-15 + (fConst0 * (0 - (1.19552409582295e-17 + fConst135))));
	fConst149 = (1.20194141921019e-13 + (fConst0 * (6.13094083918024e-16 - fConst139)));
	fConst150 = (2.75274977463425e-11 + (fConst0 * ((fConst0 * (fConst139 - 7.40455202627308e-16)) - 2.28437667271049e-13)));
	fConst151 = (1.15904579525062e-17 + (fConst0 * (2.5518621970387e-17 + fConst113)));
	fConst152 = (1.74435132490524e-14 + (fConst0 * (0 - (1.50041768291851e-16 + fConst115))));
	fConst153 = (2.80791665213576e-12 + fConst45);
	fConst154 = (1.70447911066268e-16 + (fConst0 * (3.74845005561448e-16 + (fConst0 * (6.21432086249824e-18 + fConst119)))));
	fConst155 = (2.56532727185353e-13 + (fConst0 * ((fConst0 * (0 - (2.17536949986228e-17 + fConst121))) - 2.18080465833552e-15)));
	fConst156 = (5.11343733198803e-19 + (fConst0 * (0 - (3.3778942012871e-18 + fConst119))));
	fConst157 = (1.14564318252207e-15 + (fConst0 * (1.79328614373443e-17 + fConst121)));
	fConst158 = ((fConst0 * (3.06547041959012e-16 + fConst125)) - 6.00970709605096e-14);
	fConst159 = (4.12912466195138e-11 + (fConst0 * (1.14218833635524e-13 + (fConst0 * (0 - (3.70227601313654e-16 + fConst125))))));
	fConst160 = (1.15904579525062e-17 + (fConst0 * (0 - (2.5518621970387e-17 + fConst40))));
	fConst161 = (1.74435132490524e-14 + (fConst0 * (1.50041768291851e-16 + fConst42)));
	fConst162 = (9.35972217378587e-13 + fConst117);
	fConst163 = (1.70447911066268e-16 + (fConst0 * ((fConst0 * (0 - (2.07144028749941e-18 + fConst47))) - 3.74845005561448e-16)));
	fConst164 = (2.56532727185353e-13 + (fConst0 * (2.18080465833552e-15 + (fConst0 * (7.25123166620762e-18 + fConst49)))));
	fConst165 = ((fConst0 * (1.12596473376237e-18 + fConst47)) - 5.11343733198803e-19);
	fConst166 = ((fConst0 * (0 - (5.97762047911477e-18 + fConst49))) - 1.14564318252207e-15);
	fConst167 = ((fConst0 * (0 - (3.06547041959012e-16 + fConst53))) - 6.00970709605096e-14);
	fConst168 = (1.37637488731713e-11 + (fConst0 * (1.14218833635524e-13 + (fConst0 * (3.70227601313654e-16 + fConst53)))));
	fConst169 = (fConst6 / fConst23);
	fConst170 = (5.84663387049587e-27 * fConst0);
	fConst171 = (fConst0 * (9.99940824958545e-23 + fConst170));
	fConst172 = (1.7285940638901e-19 + fConst171);
	fConst173 = (3.50798032229752e-26 * fConst0);
	fConst174 = ((fConst0 * (5.99964494975127e-22 + fConst173)) - 1.03715643833406e-18);
	fConst175 = (fConst0 * (9.99940824958545e-23 - fConst170));
	fConst176 = (5.18578219167031e-19 + fConst175);
	fConst177 = (2.33865354819835e-26 * fConst0);
	fConst178 = (fConst177 - 3.99976329983418e-22);
	fConst179 = ((fConst0 * fConst178) - 1.38287525111208e-18);
	fConst180 = (1.03715643833406e-18 + (fConst0 * (5.99964494975127e-22 - fConst173)));
	fConst181 = (0 - (3.99976329983418e-22 + fConst177));
	fConst182 = (1.38287525111208e-18 + (fConst0 * fConst181));
	fConst183 = (fConst171 - 5.18578219167031e-19);
	fConst184 = (fConst175 - 1.7285940638901e-19);
	fConst185 = (faustpower<3>(fConst0) / fConst16);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = (0.007000000000000006 * double(fslider3));
	for (int i=0; i<count; i++) {
		fRec2[0] = (fSlow0 + (0.993 * fRec2[1]));
		fRec3[0] = (fSlow1 + (0.993 * fRec3[1]));
		double fTemp0 = (7.20035317480518e-13 + ((fRec3[0] * (5.79929217601893e-13 + ((fRec3[0] * ((fConst0 * (fConst39 + (fRec2[0] * ((fConst0 * (fConst38 + (fConst37 * fRec2[0]))) - 5.15819689693484e-15)))) - 2.76727301337706e-13)) + (fConst0 * (fConst36 + (fRec2[0] * (1.08098806160993e-14 + (fConst0 * (fConst34 + (fConst32 * fRec2[0])))))))))) + (fConst0 * (fConst30 + (fRec2[0] * (1.34214583178369e-14 + (fConst0 * (fConst28 + (fConst26 * fRec2[0])))))))));
		fRec4[0] = ((double)input0[i] - ((((((fRec4[1] * (3.60017658740259e-12 + ((fRec3[0] * (2.89964608800947e-12 + ((fRec3[0] * ((fConst0 * (fConst112 + (fRec2[0] * ((fConst0 * (fConst111 + (fConst110 * fRec2[0]))) - 1.54745906908045e-14)))) - 1.38363650668853e-12)) + (fConst0 * (fConst109 + (fRec2[0] * (3.24296418482979e-14 + (fConst0 * (fConst108 + (fConst107 * fRec2[0])))))))))) + (fConst0 * (fConst106 + (fRec2[0] * (4.02643749535106e-14 + (fConst0 * (fConst105 + (fConst104 * fRec2[0])))))))))) + (fRec4[2] * (7.20035317480518e-12 + ((fRec3[0] * (5.79929217601893e-12 + ((fRec3[0] * ((fConst0 * (fConst103 + (fRec2[0] * ((fConst0 * (fConst102 + (fConst101 * fRec2[0]))) - 1.03163937938697e-14)))) - 2.76727301337706e-12)) + (fConst0 * (fConst100 + (fRec2[0] * (2.16197612321986e-14 + (fConst0 * (fConst99 + (fConst98 * fRec2[0])))))))))) + (fConst0 * (fConst97 + (fRec2[0] * (2.68429166356737e-14 + (fConst0 * (fConst96 + (fConst95 * fRec2[0]))))))))))) + (fRec4[3] * (7.20035317480518e-12 + ((fRec3[0] * (5.79929217601893e-12 + ((fRec3[0] * ((fConst0 * (fConst94 + (fRec2[0] * (1.03163937938697e-14 + (fConst0 * (fConst93 + (fConst92 * fRec2[0]))))))) - 2.76727301337706e-12)) + (fConst0 * (fConst91 + (fRec2[0] * ((fConst0 * (fConst89 + (fConst87 * fRec2[0]))) - 2.16197612321986e-14))))))) + (fConst0 * (fConst85 + (fRec2[0] * ((fConst0 * (fConst83 + (fConst81 * fRec2[0]))) - 2.68429166356737e-14)))))))) + (fRec4[4] * (3.60017658740259e-12 + ((fRec3[0] * (2.89964608800947e-12 + ((fRec3[0] * ((fConst0 * (fConst79 + (fRec2[0] * (1.54745906908045e-14 + (fConst0 * (fConst78 + (fConst77 * fRec2[0]))))))) - 1.38363650668853e-12)) + (fConst0 * (fConst76 + (fRec2[0] * ((fConst0 * (fConst74 + (fConst72 * fRec2[0]))) - 3.24296418482979e-14))))))) + (fConst0 * (fConst70 + (fRec2[0] * ((fConst0 * (fConst68 + (fConst66 * fRec2[0]))) - 4.02643749535106e-14)))))))) + (fRec4[5] * (7.20035317480518e-13 + ((fRec3[0] * (5.79929217601893e-13 + ((fRec3[0] * ((fConst0 * (fConst64 + (fRec2[0] * (5.15819689693484e-15 + (fConst0 * (fConst63 + (fConst62 * fRec2[0]))))))) - 2.76727301337706e-13)) + (fConst0 * (fConst61 + (fRec2[0] * ((fConst0 * (fConst60 + (fConst59 * fRec2[0]))) - 1.08098806160993e-14))))))) + (fConst0 * (fConst58 + (fRec2[0] * ((fConst0 * (fConst57 + (fConst56 * fRec2[0]))) - 1.34214583178369e-14)))))))) / fTemp0));
		fRec5[0] = (fSlow2 + (0.993 * fRec5[1]));
		fRec1[0] = (tubeclip(((fRec5[0] * ((((((fRec4[0] * (((fRec3[0] * ((fConst0 * (fConst168 + ((fRec3[0] * (2.73217975091517e-14 + (fConst0 * (fConst167 + (fRec2[0] * (5.20868763523094e-16 + (fConst0 * (fConst166 + (fConst165 * fRec2[0]))))))))) + (fRec2[0] * ((fConst0 * (fConst164 + (fConst163 * fRec2[0]))) - 1.16806950818942e-13))))) - 6.26646731861278e-12)) + (fConst0 * (fConst162 + (fRec2[0] * ((fConst0 * (fConst161 + (fConst160 * fRec2[0]))) - 7.94287265568807e-15))))) - 4.26119777665669e-13)) + (fRec4[1] * (((fRec3[0] * ((fConst0 * (fConst159 + ((fRec3[0] * (8.19653925274551e-14 + (fConst0 * (fConst158 + (fRec2[0] * (5.20868763523094e-16 + (fConst0 * (fConst157 + (fConst156 * fRec2[0]))))))))) + (fRec2[0] * ((fConst0 * (fConst155 + (fConst154 * fRec2[0]))) - 3.50420852456827e-13))))) - 3.13323365930639e-11)) + (fConst0 * (fConst153 + (fRec2[0] * ((fConst0 * (fConst152 + (fConst151 * fRec2[0]))) - 2.38286179670642e-14))))) - 2.13059888832834e-12))) + (fRec4[2] * (((fRec3[0] * ((fConst0 * (fConst150 + ((fRec3[0] * (5.46435950183034e-14 + (fConst0 * (fConst149 + (fRec2[0] * ((fConst0 * (fConst148 + (fConst147 * fRec2[0]))) - 1.04173752704619e-15)))))) + (fRec2[0] * ((fConst0 * (fConst146 + (fConst145 * fRec2[0]))) - 2.33613901637884e-13))))) - 6.26646731861278e-11)) + (fConst0 * (fConst144 + (fRec2[0] * ((fConst0 * (fConst143 + (fConst142 * fRec2[0]))) - 1.58857453113761e-14))))) - 4.26119777665669e-12))) + (fRec4[3] * (((fRec3[0] * ((fConst0 * (fConst141 + ((fRec3[0] * ((fConst0 * (fConst140 + (fRec2[0] * ((fConst0 * (fConst138 + (fConst137 * fRec2[0]))) - 1.04173752704619e-15)))) - 5.46435950183034e-14)) + (fRec2[0] * (2.33613901637884e-13 + (fConst0 * (fConst136 + (fConst134 * fRec2[0])))))))) - 6.26646731861278e-11)) + (fConst0 * (fConst132 + (fRec2[0] * (1.58857453113761e-14 + (fConst0 * (fConst130 + (fConst129 * fRec2[0])))))))) - 4.26119777665669e-12))) + (fRec4[4] * (((fRec3[0] * ((fConst0 * (fConst127 + ((fRec3[0] * ((fConst0 * (fConst126 + (fRec2[0] * (5.20868763523094e-16 + (fConst0 * (fConst124 + (fConst123 * fRec2[0]))))))) - 8.19653925274551e-14)) + (fRec2[0] * (3.50420852456827e-13 + (fConst0 * (fConst122 + (fConst120 * fRec2[0])))))))) - 3.13323365930639e-11)) + (fConst0 * (fConst118 + (fRec2[0] * (2.38286179670642e-14 + (fConst0 * (fConst116 + (fConst114 * fRec2[0])))))))) - 2.13059888832834e-12))) + (fRec4[5] * (((fRec3[0] * ((fConst0 * (fConst55 + ((fRec3[0] * ((fConst0 * (fConst54 + (fRec2[0] * (5.20868763523094e-16 + (fConst0 * (fConst52 + (fConst51 * fRec2[0]))))))) - 2.73217975091517e-14)) + (fRec2[0] * (1.16806950818942e-13 + (fConst0 * (fConst50 + (fConst48 * fRec2[0])))))))) - 6.26646731861278e-12)) + (fConst0 * (fConst46 + (fRec2[0] * (7.94287265568807e-15 + (fConst0 * (fConst43 + (fConst41 * fRec2[0])))))))) - 4.26119777665669e-13)))) / fTemp0), MA) - (fConst24 * (((fConst22 * fRec1[1]) + (fConst21 * fRec1[2])) + (fConst19 * fRec1[3]))));
		fRec6[0] = (fSlow3 + (0.993 * fRec6[1]));
		fRec0[0] = ((fConst169 * ((5.95584926303693e-10 * (fRec6[0] * (fRec1[1] + fRec1[2]))) + ((0 - (5.95584926303693e-10 * fRec6[0])) * (fRec1[3] + fRec1[0])))) - (fConst17 * (((((((((fConst15 * fRec0[1]) + (fConst14 * fRec0[2])) + (fConst13 * fRec0[3])) + (fConst12 * fRec0[4])) + (fConst11 * fRec0[5])) + (fConst9 * fRec0[6])) + (fConst7 * fRec0[7])) + (fConst4 * fRec0[8])) + (fConst2 * fRec0[9]))));
		output0[i] = (FAUSTFLOAT)(fConst185 * ((fConst0 * ((fConst181 * fRec0[2]) + (fConst178 * fRec0[7]))) + ((fConst184 * fRec0[9]) + ((fConst183 * fRec0[8]) + ((fConst182 * fRec0[6]) + ((fConst180 * fRec0[5]) + ((fConst179 * fRec0[3]) + ((fConst176 * fRec0[1]) + ((fConst174 * fRec0[4]) + (fConst172 * fRec0[0]))))))))));
		// post processing
		for (int i=9; i>0; i--) fRec0[i] = fRec0[i-1];
		fRec6[1] = fRec6[0];
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec5[1] = fRec5[0];
		for (int i=5; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case LEVEL: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BASS, 
   LEVEL, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace CreamMachine
