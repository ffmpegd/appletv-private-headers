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
}
+ (void)initialize;	// 0x31af53c1
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x31af543d
+ (id)sharedManager;	// 0x31af542d
- (id)initWithPaths:(id)paths;	// 0x31af5499
- (id)attributeDescriptionForEffectID:(id)effectID andKey:(id)key;	// 0x31af6745
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x31af684d
- (Class)classForEffectID:(id)effectID;	// 0x31af5f19
- (void)cleanup;	// 0x31af5cf5
- (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x31af66dd
- (void)dealloc;	// 0x31af5cb5
- (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x31af6711
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x31af6625
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x31af65dd
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x31af666d
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x31af6785
- (id)descriptionForEffectID:(id)effectID;	// 0x31af63ad
- (id)effectWithEffectID:(id)effectID;	// 0x31af6041
- (BOOL)hasCustomTimingForEffectID:(id)effectID;	// 0x31af66b5
- (BOOL)hasMultiImageInputForEffectID:(id)effectID;	// 0x31af646d
- (id)imageInputInfosForEffectID:(id)effectID;	// 0x31af64b1
- (id)imageProviderInfosForEffectID:(id)effectID;	// 0x31af64e9
- (BOOL)isOpaqueForEffectID:(id)effectID;	// 0x31af6565
- (float)lineSpacingFactorForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x31af6789
- (void)recycleEffect:(id)effect;	// 0x31af625d
- (void)releaseResources;	// 0x31af5d71
- (id)resourcePathForEffectID:(id)effectID andResource:(id)resource;	// 0x31af63cd
- (id)sizeScriptForEffectID:(id)effectID andKey:(id)key;	// 0x31af641d
- (BOOL)supportsAccumulationForEffectID:(id)effectID;	// 0x31af6521
@end

