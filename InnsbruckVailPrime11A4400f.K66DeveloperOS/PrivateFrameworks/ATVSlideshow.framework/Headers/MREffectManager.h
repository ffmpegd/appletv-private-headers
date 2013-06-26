/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface MREffectManager : NSObject {
	NSMutableDictionary *mEffectSets;	// 4 = 0x4
	NSMutableDictionary *mEffectPools;	// 8 = 0x8
	NSMutableDictionary *mFontRepository;	// 12 = 0xc
}
+ (void)initialize;	// 0x2fc05645
+ (id)sharedManager;	// 0x2fc056ad
- (id)init;	// 0x2fc056bd
- (id)attributeDescriptionForEffectID:(id)effectID andKey:(id)key;	// 0x2fc0621d
- (Class)classForEffectID:(id)effectID;	// 0x2fc059ad
- (void)cleanup;	// 0x2fc0578d
- (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x2fc061bd
- (void)dealloc;	// 0x2fc0574d
- (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x2fc061ed
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x2fc0610d
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x2fc060c9
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x2fc06151
- (id)descriptionForEffectID:(id)effectID;	// 0x2fc05e79
- (id)effectWithEffectID:(id)effectID;	// 0x2fc05ae9
- (BOOL)hasCustomTimingForEffectID:(id)effectID;	// 0x2fc06195
- (BOOL)hasMultiImageInputForEffectID:(id)effectID;	// 0x2fc05f6d
- (id)imageInputInfosForEffectID:(id)effectID;	// 0x2fc05fad
- (id)imageProviderInfosForEffectID:(id)effectID;	// 0x2fc05fe1
- (BOOL)isOpaqueForEffectID:(id)effectID;	// 0x2fc06055
- (float)lineSpacingFactorForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x2fc0625d
- (void)recycleEffect:(id)effect;	// 0x2fc05d25
- (void)releaseResources;	// 0x2fc057f1
- (id)resourcePathForEffectID:(id)effectID andResource:(id)resource;	// 0x2fc05eb1
- (id)sizeScriptForEffectID:(id)effectID andKey:(id)key;	// 0x2fc05f21
- (BOOL)supportsAccumulationForEffectID:(id)effectID;	// 0x2fc06015
@end
