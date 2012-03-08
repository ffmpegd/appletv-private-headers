/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MREffectManager : NSObject {
	NSMutableDictionary *mEffectRepository;	// 4 = 0x4
	NSMutableDictionary *mEffectSets;	// 8 = 0x8
	NSMutableDictionary *mEffectPools;	// 12 = 0xc
	NSMutableDictionary *mFontRepository;	// 16 = 0x10
}
+ (void)initialize;	// 0x354e1d25
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x354e1da1
+ (id)sharedManager;	// 0x354e1d91
- (id)initWithPaths:(id)paths;	// 0x354e1dfd
- (id)attributeDescriptionForEffectID:(id)effectID andKey:(id)key;	// 0x354e3121
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x354e3801
- (Class)classForEffectID:(id)effectID;	// 0x354e28f5
- (void)cleanup;	// 0x354e26a1
- (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x354e30b9
- (void)dealloc;	// 0x354e2661
- (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x354e30ed
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x354e3001
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x354e2fb9
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x354e3049
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x354e3161
- (id)descriptionForEffectID:(id)effectID;	// 0x354e2d89
- (id)effectWithEffectID:(id)effectID;	// 0x354e2a1d
- (BOOL)hasCustomTimingForEffectID:(id)effectID;	// 0x354e3091
- (BOOL)hasMultiImageInputForEffectID:(id)effectID;	// 0x354e2e49
- (id)imageInputInfosForEffectID:(id)effectID;	// 0x354e2e8d
- (id)imageProviderInfosForEffectID:(id)effectID;	// 0x354e2ec5
- (BOOL)isOpaqueForEffectID:(id)effectID;	// 0x354e2f41
- (float)lineSpacingFactorForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x354e373d
- (void)recycleEffect:(id)effect;	// 0x354e2c39
- (void)releaseResources;	// 0x354e2739
- (id)resourcePathForEffectID:(id)effectID andResource:(id)resource;	// 0x354e2da9
- (id)sizeScriptForEffectID:(id)effectID andKey:(id)key;	// 0x354e2df9
- (BOOL)supportsAccumulationForEffectID:(id)effectID;	// 0x354e2efd
@end
