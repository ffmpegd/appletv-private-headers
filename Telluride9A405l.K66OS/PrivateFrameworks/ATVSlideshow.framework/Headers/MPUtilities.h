/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPUtilities : NSObject {
}
+ (CGColorRef)CGColorFromString:(id)string;	// 0x33509885
+ (CGColorRef)CGColorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x33509a35
+ (id)animationsPathsFromFilterID:(id)filterID andPresetID:(id)anId;	// 0x335071dd
+ (float)aspectRatioOfLayerable:(id)layerable relativeToAspectRatio:(float)aspectRatio;	// 0x335092e1
+ (id)attributesFormMPFilter:(id)filter atTime:(double)time;	// 0x33506c4d
+ (id)attributesFromAnimationPathsInFilter:(id)filter atTime:(double)time;	// 0x33506d21
+ (CGColorRef)blackCGColor;	// 0x33509aa9
+ (void)collectAllActionableLayers:(id)layers inDictionary:(id)dictionary;	// 0x3350a459
+ (CGPoint)computePointValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(CGPoint)to;	// 0x33506215
+ (float)computeScalarValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(float)to context:(id)context;	// 0x335059d9
+ (id)computeVectorValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(id)to;	// 0x335064d9
+ (id)createMCAction:(id)action forPlug:(id)plug withKey:(id)key;	// 0x3350a1e1
+ (id)createPlugInContainer:(id)container forLayer:(id)layer key:(id)key inDocument:(id)document;	// 0x3350a635
+ (id)createPlugInSlide:(id)slide forLayer:(id)layer inDocument:(id)document;	// 0x3350a949
+ (id)createPlugPathToContainer:(id)container inDocument:(id)document;	// 0x33509b51
+ (id)createPlugPathToObject:(id)object inDocument:(id)document;	// 0x33509de9
+ (id)defaultAttributesForMPFilter:(id)mpfilter;	// 0x33506c45
+ (id)defaultAttributesForMPTransition:(id)mptransition;	// 0x33506c49
+ (id)effectContainersForTime:(double)time inDocument:(id)document;	// 0x33507f35
+ (id)effectForMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33508115
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x335094a9
+ (id)idOfCombinedID:(id)combinedID;	// 0x33508ed5
+ (id)layerForPlug:(id)plug inDocument:(id)document;	// 0x33508e0d
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x33509aa5
+ (id)parentsOfObject:(id)object;	// 0x3350aa09
+ (BOOL)pathIsRelative:(id)relative;	// 0x3350a1b1
+ (id)placesPinLabelForSlideAssetPath:(id)slideAssetPath inDocument:(id)document;	// 0x33508f89
+ (id)presetIDOfCombinedID:(id)combinedID;	// 0x33508f29
+ (void)registerUndoForDocument:(id)document toReceiver:(id)receiver withSelector:(SEL)selector object:(id)object;	// 0x33509b15
+ (CGPoint)scaledFilterPresetPointValue:(CGPoint)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33506875
+ (float)scaledFilterPresetScalarValue:(float)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33506799
+ (XXStruct_Te64nB)scaledFilterPresetVectorValue:(XXStruct_Te64nB)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33506a9d
+ (id)slideForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33508cbd
+ (id)slideForPath:(id)path inDocument:(id)document;	// 0x33508771
+ (id)slideForSlide:(id)slide inDocument:(id)document;	// 0x335086b9
+ (id)stringFromCGColor:(CGColorRef)cgcolor;	// 0x335099c5
+ (id)stringWithNewUUID;	// 0x33509849
+ (void)syncAnimationPaths:(id)paths;	// 0x335078bd
+ (id)textForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33508be1
+ (id)textsDisplayedAtTime:(double)time inDocument:(id)document;	// 0x33508961
+ (int)timeOffSetFromString:(id)string;	// 0x33505751
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath;	// 0x33505849
@end

