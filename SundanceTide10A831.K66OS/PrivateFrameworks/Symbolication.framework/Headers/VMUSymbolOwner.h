/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Symbolication-Structs.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : NSObject <NSCopying> {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	id<VMUMemory> _textMemory;	// 12 = 0xc
	NSArray *_regions;	// 16 = 0x10
	NSArray *_symbols;	// 20 = 0x14
	NSArray *_sourceInfos;	// 24 = 0x18
	unsigned _flags;	// 28 = 0x1c
	unsigned _currentVersion;	// 32 = 0x20
	unsigned _compatibilityVersion;	// 36 = 0x24
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x379c1d51; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x379c1d41; converted property
@property(readonly, assign) unsigned flags;	// G=0x379c1d31; converted property
@property(readonly, retain) NSString *name;	// G=0x379c190d; converted property
@property(readonly, retain) NSArray *regions;	// G=0x379c19a9; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x379c191d; converted property
@property(readonly, retain) NSArray *sourceInfos;	// G=0x379c1cc9; converted property
@property(readonly, retain) NSArray *symbols;	// G=0x379c1cb9; converted property
+ (id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x379c16e5
- (id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x379c175d
- (id)architecture;	// 0x379c1959
- (int)compare:(id)compare;	// 0x379c1e5d
// converted property getter: - (unsigned)compatibilityVersion;	// 0x379c1d51
- (BOOL)containsAddress:(unsigned long long)address;	// 0x379c1985
- (id)copyWithZone:(NSZone *)zone;	// 0x379c20c9
// converted property getter: - (unsigned)currentVersion;	// 0x379c1d41
- (void)dealloc;	// 0x379c1ff1
- (id)description;	// 0x379c1f6d
// converted property getter: - (unsigned)flags;	// 0x379c1d31
- (BOOL)isAOut;	// 0x379c1db1
- (BOOL)isBundle;	// 0x379c1ded
- (BOOL)isCommpage;	// 0x379c1d9d
- (BOOL)isDsym;	// 0x379c1e05
- (BOOL)isDyld;	// 0x379c1dd9
- (BOOL)isDylib;	// 0x379c1dc5
- (BOOL)isEqualToSymbolOwner:(id)symbolOwner;	// 0x379c1e19
- (BOOL)isLazy;	// 0x379c2bc9
- (BOOL)isMachO;	// 0x379c1d61
- (BOOL)isPEF;	// 0x379c1d89
- (BOOL)isProtected;	// 0x379c1d75
// converted property getter: - (id)name;	// 0x379c190d
- (id)path;	// 0x379c192d
- (id)programTextForAddress:(unsigned long long)address;	// 0x379c2fb1
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x379c3011
- (id)regionForAddress:(unsigned long long)address;	// 0x379c1a89
// converted property getter: - (id)regions;	// 0x379c19a9
- (id)regionsForName:(id)name;	// 0x379c19b9
// converted property getter: - (id)signature;	// 0x379c191d
- (unsigned long long)size;	// 0x379c3081
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x379c2d61
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x379c1ca1
// converted property getter: - (id)sourceInfos;	// 0x379c1cc9
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x379c1d05
- (id)symbolForAddress:(unsigned long long)address;	// 0x379c1aa1
- (id)symbolForName:(id)name;	// 0x379c1b89
- (id)symbolOwnerByAddingContentsOfOwner:(id)owner;	// 0x379c2bcd
// converted property getter: - (id)symbols;	// 0x379c1cb9
- (id)symbolsForMangledName:(id)mangledName;	// 0x379c1bd1
- (id)symbolsForName:(id)name;	// 0x379c1ab9
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x379c1cd9
- (BOOL)validate;	// 0x379c3195
@end

