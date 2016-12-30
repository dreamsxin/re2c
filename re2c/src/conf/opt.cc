#include "src/conf/msg.h"
#include "src/conf/opt.h"

namespace re2c
{

opt_t::opt_t ()
#define OPT1(type, name, value) : name (value)
#define OPT(type, name, value)  , name (value)
	RE2C_OPTS
#undef OPT1
#undef OPT
{}

opt_t::opt_t (const opt_t & opt)
#define OPT1(type, name, value) : name (opt.name)
#define OPT(type, name, value)  , name (opt.name)
	RE2C_OPTS
#undef OPT1
#undef OPT
{}

opt_t & opt_t::operator = (const opt_t & opt)
{
#define OPT1 OPT
#define OPT(type, name, value) name = opt.name;
	RE2C_OPTS
#undef OPT1
#undef OPT
	return *this;
}

void opt_t::fix ()
{
	// some options either make no sense or must have fixed value
	// with current target: reset them to default
	switch (target)
	{
		case DOT:
			// default code generation options
			sFlag = Opt::baseopt.sFlag;
			bFlag = Opt::baseopt.bFlag;
			gFlag = Opt::baseopt.gFlag;
			cGotoThreshold = Opt::baseopt.cGotoThreshold;
			// default environment-insensitive formatting
			yybmHexTable = Opt::baseopt.yybmHexTable;
			// fallthrough
		case SKELETON:
			// default line information
			iFlag = Opt::baseopt.iFlag;
			// default environment-sensitive formatting
			topIndent = Opt::baseopt.topIndent;
			indString = Opt::baseopt.indString;
			condDivider = Opt::baseopt.condDivider;
			condDividerParam = Opt::baseopt.condDividerParam;
			// default environment bindings
			tFlag = Opt::baseopt.tFlag;
			header_file = Opt::baseopt.header_file;
			yycondtype = Opt::baseopt.yycondtype;
			cond_get = Opt::baseopt.cond_get;
			cond_get_naked = Opt::baseopt.cond_get_naked;
			cond_set = Opt::baseopt.cond_set;
			cond_set_arg = Opt::baseopt.cond_set_arg;
			cond_set_naked = Opt::baseopt.cond_set_naked;
			yyctable = Opt::baseopt.yyctable;
			condPrefix = Opt::baseopt.condPrefix;
			condEnumPrefix = Opt::baseopt.condEnumPrefix;
			condGoto = Opt::baseopt.condGoto;
			condGotoParam = Opt::baseopt.condGotoParam;
			fFlag = Opt::baseopt.fFlag;
			state_get = Opt::baseopt.state_get;
			state_get_naked = Opt::baseopt.state_get_naked;
			state_set = Opt::baseopt.state_set;
			state_set_arg = Opt::baseopt.state_set_arg;
			state_set_naked = Opt::baseopt.state_set_naked;
			tags_default = Opt::baseopt.tags_default;
			tags_prefix = Opt::baseopt.tags_prefix;
			tags_expression = Opt::baseopt.tags_expression;
			yyfilllabel = Opt::baseopt.yyfilllabel;
			yynext = Opt::baseopt.yynext;
			yyaccept = Opt::baseopt.yyaccept;
			bUseStateAbort = Opt::baseopt.bUseStateAbort;
			bUseStateNext = Opt::baseopt.bUseStateNext;
			yybm = Opt::baseopt.yybm;
			yytarget = Opt::baseopt.yytarget;
			input_api = Opt::baseopt.input_api;
			yycursor = Opt::baseopt.yycursor;
			yymarker = Opt::baseopt.yymarker;
			yyctxmarker = Opt::baseopt.yyctxmarker;
			yylimit = Opt::baseopt.yylimit;
			yypeek = Opt::baseopt.yypeek;
			yyskip = Opt::baseopt.yyskip;
			yybackup = Opt::baseopt.yybackup;
			yybackupctx = Opt::baseopt.yybackupctx;
			yybackuptag = Opt::baseopt.yybackuptag;
			yyrestore = Opt::baseopt.yyrestore;
			yyrestorectx = Opt::baseopt.yyrestorectx;
			yyrestoretag = Opt::baseopt.yyrestoretag;
			yycopytag = Opt::baseopt.yycopytag;
			yylessthan = Opt::baseopt.yylessthan;
			dFlag = Opt::baseopt.dFlag;
			yydebug = Opt::baseopt.yydebug;
			yyctype = Opt::baseopt.yyctype;
			yych = Opt::baseopt.yych;
			bEmitYYCh = Opt::baseopt.bEmitYYCh;
			yychConversion = Opt::baseopt.yychConversion;
			fill = Opt::baseopt.fill;
			fill_use = Opt::baseopt.fill_use;
			fill_check = Opt::baseopt.fill_check;
			fill_arg = Opt::baseopt.fill_arg;
			fill_arg_use = Opt::baseopt.fill_arg_use;
			fill_naked = Opt::baseopt.fill_naked;
			labelPrefix = Opt::baseopt.labelPrefix;
			dump_dfa_raw = Opt::baseopt.dump_dfa_raw;
			dump_dfa_det = Opt::baseopt.dump_dfa_det;
			dump_dfa_tagopt = Opt::baseopt.dump_dfa_tagopt;
			dump_dfa_min = Opt::baseopt.dump_dfa_min;
			dump_adfa = Opt::baseopt.dump_adfa;
			break;
		default:
			break;
	}

	if (bCaseInsensitive)
	{
		bCaseInverted = Opt::baseopt.bCaseInverted;
	}

	// respect hierarchy
	if (!cFlag)
	{
		tFlag = Opt::baseopt.tFlag;
		header_file = Opt::baseopt.header_file;
		yycondtype = Opt::baseopt.yycondtype;
		cond_get = Opt::baseopt.cond_get;
		cond_get_naked = Opt::baseopt.cond_get_naked;
		cond_set = Opt::baseopt.cond_set;
		cond_set_arg = Opt::baseopt.cond_set_arg;
		cond_set_naked = Opt::baseopt.cond_set_naked;
		yyctable = Opt::baseopt.yyctable;
		condPrefix = Opt::baseopt.condPrefix;
		condEnumPrefix = Opt::baseopt.condEnumPrefix;
		condDivider = Opt::baseopt.condDivider;
		condDividerParam = Opt::baseopt.condDividerParam;
		condGoto = Opt::baseopt.condGoto;
		condGotoParam = Opt::baseopt.condGotoParam;
	}
	if (!fFlag)
	{
		state_get = Opt::baseopt.state_get;
		state_get_naked = Opt::baseopt.state_get_naked;
		state_set = Opt::baseopt.state_set;
		state_set_arg = Opt::baseopt.state_set_arg;
		state_set_naked = Opt::baseopt.state_set_naked;
		yyfilllabel = Opt::baseopt.yyfilllabel;
		yynext = Opt::baseopt.yynext;
		yyaccept = Opt::baseopt.yyaccept;
		bUseStateAbort = Opt::baseopt.bUseStateAbort;
		bUseStateNext = Opt::baseopt.bUseStateNext;
	}
	if (!tags)
	{
		tags_default = Opt::baseopt.tags_default;
		tags_prefix = Opt::baseopt.tags_prefix;
		tags_expression = Opt::baseopt.tags_expression;
	}
	if (!bFlag)
	{
		yybmHexTable = Opt::baseopt.yybmHexTable;
		yybm = Opt::baseopt.yybm;
	}
	if (!gFlag)
	{
		cGotoThreshold = Opt::baseopt.cGotoThreshold;
		yytarget = Opt::baseopt.yytarget;
	}
	if (input_api != INPUT_DEFAULT)
	{
		yycursor = Opt::baseopt.yycursor;
		yymarker = Opt::baseopt.yymarker;
		yyctxmarker = Opt::baseopt.yyctxmarker;
		yylimit = Opt::baseopt.yylimit;
	}
	if (input_api != INPUT_CUSTOM)
	{
		yypeek = Opt::baseopt.yypeek;
		yyskip = Opt::baseopt.yyskip;
		yybackup = Opt::baseopt.yybackup;
		yybackupctx = Opt::baseopt.yybackupctx;
		yybackuptag = Opt::baseopt.yybackuptag;
		yyrestore = Opt::baseopt.yyrestore;
		yyrestorectx = Opt::baseopt.yyrestorectx;
		yyrestoretag = Opt::baseopt.yyrestoretag;
		yycopytag = Opt::baseopt.yycopytag;
		yylessthan = Opt::baseopt.yylessthan;
	}
	if (!dFlag)
	{
		yydebug = Opt::baseopt.yydebug;
	}
	if (!fill_use)
	{
		fill = Opt::baseopt.fill;
		fill_check = Opt::baseopt.fill_check;
		fill_arg = Opt::baseopt.fill_arg;
		fill_arg_use = Opt::baseopt.fill_arg_use;
		fill_naked = Opt::baseopt.fill_naked;
	}

	// force individual options
	switch (target)
	{
		case DOT:
			iFlag = true;
			break;
		case SKELETON:
			iFlag = true;
			input_api = INPUT_CUSTOM;
			indString = "    ";
			topIndent = 2;
			break;
		default:
			break;
	}
	switch (encoding.type ())
	{
		case Enc::UCS2:
		case Enc::UTF16:
		case Enc::UTF32:
			sFlag = true;
			break;
		default:
			break;
	}
	if (bFlag)
	{
		sFlag = true;
	}
	if (gFlag)
	{
		bFlag = true;
		sFlag = true;
	}
	if (!header_file.empty())
	{
		tFlag = true;
	}
}

realopt_t::realopt_t (useropt_t & opt)
	: real ()
	, user (opt)
{}

const opt_t * realopt_t::operator -> ()
{
	sync ();
	return &real;
}

void realopt_t::sync ()
{
	if (user.diverge)
	{
		real = user.opt;
		real.fix ();
		user.diverge = false;
	}
}

useropt_t::useropt_t ()
	: opt ()
	, diverge (true)
{}

opt_t * useropt_t::operator -> ()
{
	diverge = true;
	return &opt;
}

const opt_t Opt::baseopt;

bool Opt::source (const char *s)
{
	if (source_file)
	{
		error ("multiple source files: %s, %s", source_file, s);
		return false;
	}
	else
	{
		source_file = s;
		return true;
	}
}

void Opt::reset_encoding (const Enc & enc)
{
	useropt->encoding = enc;
}

void Opt::reset_mapCodeName ()
{
	// historically arranged set of names
	// no actual reason why these particular options should be reset
	useropt->cond_get = Opt::baseopt.cond_get;
	useropt->cond_set = Opt::baseopt.cond_set;
	useropt->fill = Opt::baseopt.fill;
	useropt->state_get = Opt::baseopt.state_get;
	useropt->state_set = Opt::baseopt.state_set;
	useropt->yybackup = Opt::baseopt.yybackup;
	useropt->yybackupctx = Opt::baseopt.yybackupctx;
	useropt->yybackuptag = Opt::baseopt.yybackuptag;
	useropt->yycondtype = Opt::baseopt.yycondtype;
	useropt->yyctxmarker = Opt::baseopt.yyctxmarker;
	useropt->yyctype = Opt::baseopt.yyctype;
	useropt->yycursor = Opt::baseopt.yycursor;
	useropt->yydebug = Opt::baseopt.yydebug;
	useropt->yylessthan = Opt::baseopt.yylessthan;
	useropt->yylimit = Opt::baseopt.yylimit;
	useropt->yymarker = Opt::baseopt.yymarker;
	useropt->yypeek = Opt::baseopt.yypeek;
	useropt->yyrestore = Opt::baseopt.yyrestore;
	useropt->yyrestorectx = Opt::baseopt.yyrestorectx;
	useropt->yyrestoretag = Opt::baseopt.yyrestoretag;
	useropt->yycopytag = Opt::baseopt.yycopytag;
	useropt->yyskip = Opt::baseopt.yyskip;
	useropt->yyfilllabel = Opt::baseopt.yyfilllabel;
	useropt->yynext = Opt::baseopt.yynext;
	useropt->yyaccept = Opt::baseopt.yyaccept;
	useropt->yybm = Opt::baseopt.yybm;
	useropt->yych = Opt::baseopt.yych;
	useropt->yyctable = Opt::baseopt.yyctable;
	useropt->yytarget = Opt::baseopt.yytarget;
}

} // namespace re2c
