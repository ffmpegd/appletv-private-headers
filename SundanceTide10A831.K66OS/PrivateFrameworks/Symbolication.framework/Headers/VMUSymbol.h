/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, assign) unsigned flags;	// G=0x379bcc51; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x379bca5d; converted property
@property(readonly, retain) NSString *name;	// G=0x379bc9dd; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x379bca95; S=0x379bd0b9; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x379bc8ad
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x379bc91d
- (VMURange)addressRange;	// 0x379bca6d
- (int)compare:(id)compare;	// 0x379bcd09
- (id)copyWithZone:(NSZone *)zone;	// 0x379bd019
- (void)dealloc;	// 0x379bcfa1
- (id)description;	// 0x379bcf21
// converted property getter: - (unsigned)flags;	// 0x379bcc51
- (BOOL)isArm;	// 0x379bcced
- (BOOL)isDwarf;	// 0x379bccd9
- (BOOL)isDyldStub;	// 0x379bcc9d
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x379bcdcd
- (BOOL)isExternal;	// 0x379bccb1
- (BOOL)isFunction;	// 0x379bcc61
- (BOOL)isJavaMethod;	// 0x379bcc89
- (BOOL)isObjcMethod;	// 0x379bcc75
- (BOOL)isStab;	// 0x379bccc5
- (BOOL)isThumb;	// 0x379bcd05
// converted property getter: - (id)mangledName;	// 0x379bca5d
// converted property getter: - (id)name;	// 0x379bc9dd
// converted property getter: - (id)owner;	// 0x379bca95
// converted property setter: - (void)setOwner:(id)owner;	// 0x379bd0b9
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x379bcaed
- (id)sourceInfos;	// 0x379bcaa5
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x379bcb5d
- (id)text;	// 0x379bcbed
@end
