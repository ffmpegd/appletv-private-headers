/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPFilterSupport.h"
#import "MPAnimationSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import <NSObject.h> // Unknown library
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"

@class MPAudioPlaylist, MCMontage, MCPlugParallel, NSMutableDictionary, NSMutableArray, MPLayerInternal;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x33247b85; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x33246b35; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3324781d; S=0x3324782d; converted property
@property(assign) int audioPriority;	// G=0x33247831; S=0x33247851; converted property
@property(assign) double duration;	// G=0x33247519; S=0x33247539; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x33246469; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x33246561; converted property
@property(assign) float height;	// G=0x33249a1d; S=0x33249a41; converted property
@property(assign) BOOL isAudioLayer;	// G=0x332479f9; S=0x33247a19; converted property
@property(retain) id layerID;	// G=0x33247af9; S=0x33247ad9; converted property
@property(retain) MCMontage *montage;	// G=0x33247e2d; S=0x33249105; converted property
@property(assign) double numberOfLoops;	// G=0x332478f5; S=0x33247915; converted property
@property(assign) float opacity;	// G=0x33246d61; S=0x33246d81; converted property
@property(retain) id parent;	// G=0x3324742d; S=0x332490b1; converted property
@property(assign) double phaseInDuration;	// G=0x33247645; S=0x33247665; converted property
@property(assign) double phaseOutDuration;	// G=0x33247731; S=0x33247751; converted property
@property(retain) MCPlugParallel *plug;	// G=0x33247e1d; S=0x332489e1; converted property
@property(assign) CGPoint position;	// G=0x33246e2d; S=0x33246e4d; converted property
@property(assign) float rotationAngle;	// G=0x33246fdd; S=0x33246ffd; converted property
@property(retain) id scriptingAnimations;	// G=0x33249abd; S=0x33249e59; converted property
@property(assign) CGSize size;	// G=0x332470a9; S=0x332470c9; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x3324915d; S=0x3324916d; converted property
@property(assign) double timeIn;	// G=0x3324743d; S=0x3324745d; converted property
@property(retain) id title;	// G=0x332463c5; S=0x332463e5; converted property
@property(assign) float width;	// G=0x33249a6d; S=0x33249a91; converted property
@property(assign) float xPosition;	// G=0x3324997d; S=0x332499a1; converted property
@property(assign) float xRotationAngle;	// G=0x3324718d; S=0x332471ad; converted property
@property(assign) float yPosition;	// G=0x332499cd; S=0x332499f1; converted property
@property(assign) float yRotationAngle;	// G=0x33247259; S=0x33247279; converted property
@property(assign) int zIndex;	// G=0x33247325; S=0x33247361; converted property
@property(assign) float zPosition;	// G=0x33246f11; S=0x33246f31; converted property
+ (id)animatedLayer;	// 0x33244b45
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33244aa1
+ (id)effectLayer;	// 0x33244b81
+ (id)layer;	// 0x33244acd
+ (id)sequentialLayer;	// 0x33244b09
- (id)init;	// 0x33244bbd
- (id)initWithCoder:(id)coder;	// 0x332456fd
- (id)action;	// 0x3324813d
- (id)actionForKey:(id)key;	// 0x33247b95
// converted property getter: - (id)actions;	// 0x33247b85
- (void)addEffectContainer:(id)container;	// 0x33246479
- (void)addEffectContainers:(id)containers;	// 0x332464c9
- (void)addFilter:(id)filter;	// 0x33246571
- (void)addFilters:(id)filters;	// 0x332465c1
- (id)animationPathForKey:(id)key;	// 0x33246b45
// converted property getter: - (id)animationPaths;	// 0x33246b35
// converted property getter: - (id)audioPlaylist;	// 0x3324781d
// converted property getter: - (int)audioPriority;	// 0x33247831
- (void)cleanup;	// 0x332488e9
- (void)configureActions;	// 0x33249661
- (void)copyActions:(id)actions;	// 0x332487c5
- (void)copyAnimationPaths:(id)paths;	// 0x332486e9
- (void)copyAudioPlaylist:(id)playlist;	// 0x332488a1
- (void)copyEffectContainers:(id)containers;	// 0x332484f9
- (void)copyFilters:(id)filters;	// 0x332485f1
- (void)copyStruct:(id)aStruct;	// 0x332481c9
- (id)copyWithZone:(NSZone *)zone;	// 0x332461bd
- (int)countOfEffectContainers;	// 0x3324972d
- (int)countOfFilters;	// 0x33249855
- (void)dealloc;	// 0x332462d9
- (id)description;	// 0x33244ed1
- (void)dump;	// 0x33247e3d
// converted property getter: - (double)duration;	// 0x33247519
// converted property getter: - (id)effectContainers;	// 0x33246469
- (void)encodeWithCoder:(id)coder;	// 0x33244ff5
// converted property getter: - (id)filters;	// 0x33246561
- (void)finalize;	// 0x332462a9
- (id)fullDebugLog;	// 0x33247e61
// converted property getter: - (float)height;	// 0x33249a1d
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x33246501
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x332465f9
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x3324976d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x33249895
// converted property getter: - (BOOL)isAudioLayer;	// 0x332479f9
// converted property getter: - (id)layerID;	// 0x33247af9
- (id)layerKey;	// 0x33247b19
// converted property getter: - (id)montage;	// 0x33247e2d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x3324655d
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x33246a71
// converted property getter: - (double)numberOfLoops;	// 0x332478f5
- (id)objectID;	// 0x33248189
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x3324974d
- (id)objectInFiltersAtIndex:(int)index;	// 0x33249875
// converted property getter: - (float)opacity;	// 0x33246d61
// converted property getter: - (id)parent;	// 0x3324742d
- (id)parentDocument;	// 0x33248095
// converted property getter: - (double)phaseInDuration;	// 0x33247645
// converted property getter: - (double)phaseOutDuration;	// 0x33247731
// converted property getter: - (id)plug;	// 0x33247e1d
- (id)plugID;	// 0x33248169
// converted property getter: - (CGPoint)position;	// 0x33246e2d
- (void)reconnectAllTransitions;	// 0x3324948d
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x3324937d
- (void)recreateWithPlug:(id)plug;	// 0x33249159
- (void)removeActionForKey:(id)key;	// 0x33247d69
- (void)removeAllEffectContainers;	// 0x33246509
- (void)removeAllFilters;	// 0x33246a1d
- (void)removeAnimationPathForKey:(id)key;	// 0x33246c99
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x33246505
- (void)removeFiltersAtIndices:(id)indices;	// 0x3324688d
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x332497a5
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x332498cd
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x332497d9
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x33249901
- (void)resetStartTimes;	// 0x33249555
// converted property getter: - (float)rotationAngle;	// 0x33246fdd
// converted property getter: - (id)scriptingAnimations;	// 0x33249abd
- (void)setAction:(id)action forKey:(id)key;	// 0x33247bb5
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x33246b65
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3324782d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x33247851
// converted property setter: - (void)setDuration:(double)duration;	// 0x33247539
// converted property setter: - (void)setHeight:(float)height;	// 0x33249a41
// converted property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x33247a19
// converted property setter: - (void)setLayerID:(id)anId;	// 0x33247ad9
// converted property setter: - (void)setMontage:(id)montage;	// 0x33249105
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x33247915
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x33246d81
// converted property setter: - (void)setParent:(id)parent;	// 0x332490b1
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x33247665
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x33247751
// converted property setter: - (void)setPlug:(id)plug;	// 0x332489e1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x33246e4d
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x33246ffd
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x33249e59
// converted property setter: - (void)setSize:(CGSize)size;	// 0x332470c9
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x3324916d
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x3324745d
// converted property setter: - (void)setTitle:(id)title;	// 0x332463e5
// converted property setter: - (void)setWidth:(float)width;	// 0x33249a91
// converted property setter: - (void)setXPosition:(float)position;	// 0x332499a1
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x332471ad
// converted property setter: - (void)setYPosition:(float)position;	// 0x332499f1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x33247279
// converted property setter: - (void)setZIndex:(int)index;	// 0x33247361
// converted property setter: - (void)setZPosition:(float)position;	// 0x33246f31
// converted property getter: - (CGSize)size;	// 0x332470a9
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x3324915d
// converted property getter: - (double)timeIn;	// 0x3324743d
// converted property getter: - (id)title;	// 0x332463c5
- (void)updateDurationPadding:(double)padding;	// 0x332491b9
- (void)updateMainDuration;	// 0x332492a5
- (id)uuid;	// 0x332481a9
// converted property getter: - (float)width;	// 0x33249a6d
// converted property getter: - (float)xPosition;	// 0x3324997d
// converted property getter: - (float)xRotationAngle;	// 0x3324718d
// converted property getter: - (float)yPosition;	// 0x332499cd
// converted property getter: - (float)yRotationAngle;	// 0x33247259
// converted property getter: - (int)zIndex;	// 0x33247325
// converted property getter: - (float)zPosition;	// 0x33246f11
@end

