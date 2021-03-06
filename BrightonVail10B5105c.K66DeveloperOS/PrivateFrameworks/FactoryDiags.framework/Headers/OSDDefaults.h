/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"

@class NSString;

@interface OSDDefaults : NSObject {
	NSString *_domain;	// 4 = 0x4
}
+ (id)defaults;	// 0x34ee5835
+ (id)defaultsInDomain:(id)domain;	// 0x34ee586d
- (id)init;	// 0x34ee59dd
- (id)initWithDomain:(id)domain;	// 0x34ee5981
- (id)__doLookupForName:(id)name;	// 0x34ee4ff5
- (id)__doLookupFromSEL:(SEL)sel;	// 0x34ee50e9
- (id)__getDefaults;	// 0x34ee4fa5
- (id)__getRealDomain;	// 0x34ee4f81
- (void)__setValueFromSEL:(SEL)sel withValue:(id)value;	// 0x34ee51d1
- (void)__setValueInDefaults:(id)defaults forName:(id)name;	// 0x34ee510d
- (id)__unitTest;	// 0x34ee4281
- (bool)_addMethodsForProperties:(objc_property **)properties withCount:(unsigned)count andSELMap:(id)map areSetters:(BOOL)setters;	// 0x34ee4ca1
- (void)_defaultsCtor;	// 0x34ee4e55
- (bool)_defaultsGetter_B;	// 0x34ee5331
- (unsigned char)_defaultsGetter_C;	// 0x34ee5439
- (unsigned)_defaultsGetter_I;	// 0x34ee540d
- (unsigned long)_defaultsGetter_L;	// 0x34ee5461
- (unsigned long long)_defaultsGetter_Q;	// 0x34ee54b5
- (unsigned short)_defaultsGetter_S;	// 0x34ee548d
- (BOOL)_defaultsGetter_c;	// 0x34ee5309
- (double)_defaultsGetter_d;	// 0x34ee53b5
- (float)_defaultsGetter_f;	// 0x34ee5361
- (int)_defaultsGetter_i;	// 0x34ee52b1
- (id)_defaultsGetter_id;	// 0x34ee529d
- (long)_defaultsGetter_l;	// 0x34ee52dd
- (long long)_defaultsGetter_q;	// 0x34ee53e1
- (short)_defaultsGetter_s;	// 0x34ee538d
- (void)_defaultsSetter_B:(bool)b;	// 0x34ee55b5
- (void)_defaultsSetter_C:(unsigned char)c;	// 0x34ee5735
- (void)_defaultsSetter_I:(unsigned)i;	// 0x34ee56f5
- (void)_defaultsSetter_L:(unsigned long)l;	// 0x34ee5775
- (void)_defaultsSetter_Q:(unsigned long long)q;	// 0x34ee57f5
- (void)_defaultsSetter_S:(unsigned short)s;	// 0x34ee57b5
- (void)_defaultsSetter_c:(BOOL)c;	// 0x34ee5575
- (void)_defaultsSetter_d:(double)d;	// 0x34ee5675
- (void)_defaultsSetter_f:(float)f;	// 0x34ee55f5
- (void)_defaultsSetter_i:(int)i;	// 0x34ee54f5
- (void)_defaultsSetter_id:(id)anId;	// 0x34ee54e1
- (void)_defaultsSetter_l:(long)l;	// 0x34ee5535
- (void)_defaultsSetter_q:(long long)q;	// 0x34ee56b5
- (void)_defaultsSetter_s:(short)setter_s;	// 0x34ee5635
- (id)_getterList;	// 0x34ee4c69
- (id)_methodListForPrefix:(const char *)prefix;	// 0x34ee4b2d
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType;	// 0x34ee4b09
- (SEL)_selForEncodeType:(const char *)encodeType andMap:(id)map withOutType:(unsigned short *)outType andOutAttrList:(id *)list;	// 0x34ee496d
- (id)_setterList;	// 0x34ee4c85
- (void)dealloc;	// 0x34ee5935
- (BOOL)defaultExists:(id)exists;	// 0x34ee58f9
- (void)setDomain:(id)domain;	// 0x34ee589d
@end

