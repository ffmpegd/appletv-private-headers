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
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x34eb3d79; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x34eb3d69; converted property
@property(readonly, assign) unsigned flags;	// G=0x34eb3d59; converted property
@property(readonly, retain) NSString *name;	// G=0x34eb3935; converted property
@property(readonly, retain) NSArray *regions;	// G=0x34eb39d1; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x34eb3945; converted property
@property(readonly, retain) NSArray *sourceInfos;	// G=0x34eb3cf1; converted property
@property(readonly, retain) NSArray *symbols;	// G=0x34eb3ce1; converted property
+ (id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x34eb370d
- (id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x34eb3785
- (id)architecture;	// 0x34eb3981
- (int)compare:(id)compare;	// 0x34eb3e85
// converted property getter: - (unsigned)compatibilityVersion;	// 0x34eb3d79
- (BOOL)containsAddress:(unsigned long long)address;	// 0x34eb39ad
- (id)copyWithZone:(NSZone *)zone;	// 0x34eb40f1
// converted property getter: - (unsigned)currentVersion;	// 0x34eb3d69
- (void)dealloc;	// 0x34eb4019
- (id)description;	// 0x34eb3f95
// converted property getter: - (unsigned)flags;	// 0x34eb3d59
- (BOOL)isAOut;	// 0x34eb3dd9
- (BOOL)isBundle;	// 0x34eb3e15
- (BOOL)isCommpage;	// 0x34eb3dc5
- (BOOL)isDsym;	// 0x34eb3e2d
- (BOOL)isDyld;	// 0x34eb3e01
- (BOOL)isDylib;	// 0x34eb3ded
- (BOOL)isEqualToSymbolOwner:(id)symbolOwner;	// 0x34eb3e41
- (BOOL)isLazy;	// 0x34eb4bf1
- (BOOL)isMachO;	// 0x34eb3d89
- (BOOL)isPEF;	// 0x34eb3db1
- (BOOL)isProtected;	// 0x34eb3d9d
// converted property getter: - (id)name;	// 0x34eb3935
- (id)path;	// 0x34eb3955
- (id)programTextForAddress:(unsigned long long)address;	// 0x34eb4fd9
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x34eb5039
- (id)regionForAddress:(unsigned long long)address;	// 0x34eb3ab1
// converted property getter: - (id)regions;	// 0x34eb39d1
- (id)regionsForName:(id)name;	// 0x34eb39e1
// converted property getter: - (id)signature;	// 0x34eb3945
- (unsigned long long)size;	// 0x34eb50a9
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x34eb4d89
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x34eb3cc9
// converted property getter: - (id)sourceInfos;	// 0x34eb3cf1
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x34eb3d2d
- (id)symbolForAddress:(unsigned long long)address;	// 0x34eb3ac9
- (id)symbolForName:(id)name;	// 0x34eb3bb1
- (id)symbolOwnerByAddingContentsOfOwner:(id)owner;	// 0x34eb4bf5
// converted property getter: - (id)symbols;	// 0x34eb3ce1
- (id)symbolsForMangledName:(id)mangledName;	// 0x34eb3bf9
- (id)symbolsForName:(id)name;	// 0x34eb3ae1
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x34eb3d01
- (BOOL)validate;	// 0x34eb51bd
@end
