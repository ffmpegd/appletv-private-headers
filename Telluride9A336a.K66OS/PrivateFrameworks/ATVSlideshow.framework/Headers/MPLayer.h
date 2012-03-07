/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"

@class MCMontage, MCPlugParallel, NSString, NSMutableDictionary, MPLayerInternal, NSMutableArray, MPAudioPlaylist;

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
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x342c7249; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x342c5e41; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x342c6ebd; S=0x342c6ecd; converted property
@property(assign) int audioPriority;	// G=0x342c6ed1; S=0x342c6ef1; @dynamic
@property(assign) double duration;	// G=0x342c69d5; S=0x342c69f5; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x342c56e1; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x342c57f9; converted property
@property(assign) float height;	// G=0x342c9839; S=0x342c987d; converted property
@property(assign) BOOL isAudioLayer;	// G=0x342c70a5; S=0x342c70c9; @dynamic
@property(assign) BOOL isTriggered;	// G=0x342c6ce9; S=0x342c6d0d; converted property
@property(copy) NSString *layerID;	// G=0x342c71b1; S=0x342c7191; @dynamic
@property(retain) MCMontage *montage;	// G=0x342c74f9; S=0x342c8eb9; converted property
@property(assign) double numberOfLoops;	// G=0x342c6f95; S=0x342c6fb5; converted property
@property(assign) float opacity;	// G=0x342c6125; S=0x342c6145; converted property
@property(retain) id parent;	// G=0x342c68e9; S=0x342c8e09; converted property
@property(assign) double phaseInDuration;	// G=0x342c6b09; S=0x342c6b29; converted property
@property(assign) double phaseOutDuration;	// G=0x342c6bf9; S=0x342c6c19; converted property
@property(retain) MCPlugParallel *plug;	// G=0x342c74e9; S=0x342c866d; converted property
@property(assign) CGPoint position;	// G=0x342c62b5; S=0x342c62e5; converted property
@property(assign) float rotationAngle;	// G=0x342c647d; S=0x342c649d; converted property
@property(assign) float scale;	// G=0x342c61ed; S=0x342c620d; converted property
@property(retain) id scriptingAnimations;	// G=0x342c9929; S=0x342c9c8d; converted property
@property(assign) CGSize size;	// G=0x342c6545; S=0x342c6575; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x342c8f01; S=0x342c8f11; converted property
@property(assign) BOOL startsPaused;	// G=0x342c6df5; S=0x342c6e19; converted property
@property(assign) double timeIn;	// G=0x342c68f9; S=0x342c6919; converted property
@property(copy) NSString *title;	// G=0x342c5635; S=0x342c5655; @dynamic
@property(assign) float width;	// G=0x342c98b1; S=0x342c98f5; converted property
@property(assign) float xPosition;	// G=0x342c9749; S=0x342c978d; converted property
@property(assign) float xRotationAngle;	// G=0x342c6645; S=0x342c6665; converted property
@property(assign) float yPosition;	// G=0x342c97c1; S=0x342c9805; converted property
@property(assign) float yRotationAngle;	// G=0x342c670d; S=0x342c672d; converted property
@property(assign) int zIndex;	// G=0x342c67d5; S=0x342c681d; converted property
@property(assign) float zPosition;	// G=0x342c63b5; S=0x342c63d5; converted property
+ (id)animatedLayer;	// 0x342c34d9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x342c3421
+ (id)effectLayer;	// 0x342c351d
+ (id)layer;	// 0x342c3451
+ (id)sequentialLayer;	// 0x342c3495
- (id)init;	// 0x342c3561
- (id)initWithCoder:(id)coder;	// 0x342c4679
- (id)action;	// 0x342c7d21
- (id)actionForKey:(id)key;	// 0x342c7259
// converted property getter: - (id)actions;	// 0x342c7249
- (void)addEffectContainer:(id)container;	// 0x342c56f1
- (void)addEffectContainers:(id)containers;	// 0x342c574d
- (void)addFilter:(id)filter;	// 0x342c5809
- (void)addFilters:(id)filters;	// 0x342c5865
- (id)allSlides:(BOOL)slides;	// 0x342c7509
- (id)allSongs;	// 0x342c78b9
- (id)animationPathForKey:(id)key;	// 0x342c5e51
// converted property getter: - (id)animationPaths;	// 0x342c5e41
// converted property getter: - (id)audioPlaylist;	// 0x342c6ebd
// declared property getter: - (int)audioPriority;	// 0x342c6ed1
- (void)cleanup;	// 0x342c854d
- (void)configureActions;	// 0x342c93f9
- (void)copyActions:(id)actions;	// 0x342c8431
- (void)copyAnimationPaths:(id)paths;	// 0x342c8359
- (void)copyAudioPlaylist:(id)playlist;	// 0x342c8509
- (void)copyEffectContainers:(id)containers;	// 0x342c816d
- (void)copyFilters:(id)filters;	// 0x342c8261
- (void)copyStruct:(id)aStruct;	// 0x342c7dad
- (id)copyWithZone:(NSZone *)zone;	// 0x342c53e9
- (int)countOfEffectContainers;	// 0x342c94e9
- (int)countOfFilters;	// 0x342c9619
- (void)dealloc;	// 0x342c5519
- (id)description;	// 0x342c3901
- (void)dump;	// 0x342c7a61
// converted property getter: - (double)duration;	// 0x342c69d5
// converted property getter: - (id)effectContainers;	// 0x342c56e1
- (void)encodeWithCoder:(id)coder;	// 0x342c3a29
// converted property getter: - (id)filters;	// 0x342c57f9
- (void)finalize;	// 0x342c54ed
- (id)fullDebugLog;	// 0x342c7a89
// converted property getter: - (float)height;	// 0x342c9839
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x342c578d
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x342c58a5
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x342c9529
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x342c9659
// declared property getter: - (BOOL)isAudioLayer;	// 0x342c70a5
// converted property getter: - (BOOL)isTriggered;	// 0x342c6ce9
// declared property getter: - (id)layerID;	// 0x342c71b1
- (id)layerKey;	// 0x342c71d1
// converted property getter: - (id)montage;	// 0x342c74f9
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x342c57f5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x342c5d69
// converted property getter: - (double)numberOfLoops;	// 0x342c6f95
- (id)objectID;	// 0x342c7d6d
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x342c9509
- (id)objectInFiltersAtIndex:(int)index;	// 0x342c9639
// converted property getter: - (float)opacity;	// 0x342c6125
// converted property getter: - (id)parent;	// 0x342c68e9
- (id)parentDocument;	// 0x342c7ca9
// converted property getter: - (double)phaseInDuration;	// 0x342c6b09
// converted property getter: - (double)phaseOutDuration;	// 0x342c6bf9
// converted property getter: - (id)plug;	// 0x342c74e9
- (id)plugID;	// 0x342c7d4d
// converted property getter: - (CGPoint)position;	// 0x342c62b5
- (void)reconnectAllTransitions;	// 0x342c9231
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x342c9119
- (void)removeActionForKey:(id)key;	// 0x342c7425
- (void)removeAllEffectContainers;	// 0x342c5795
- (void)removeAllFilters;	// 0x342c5d09
- (void)removeAnimationPathForKey:(id)key;	// 0x342c604d
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x342c5791
- (void)removeFiltersAtIndices:(id)indices;	// 0x342c5b51
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x342c9569
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x342c9699
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x342c95a5
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x342c96d5
- (void)resetStartTimes;	// 0x342c92f1
// converted property getter: - (float)rotationAngle;	// 0x342c647d
// converted property getter: - (float)scale;	// 0x342c61ed
// converted property getter: - (id)scriptingAnimations;	// 0x342c9929
- (void)setAction:(id)action forKey:(id)key;	// 0x342c7279
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x342c5e71
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x342c6ecd
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x342c6ef1
// converted property setter: - (void)setDuration:(double)duration;	// 0x342c69f5
// converted property setter: - (void)setHeight:(float)height;	// 0x342c987d
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x342c70c9
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x342c6d0d
// declared property setter: - (void)setLayerID:(id)anId;	// 0x342c7191
// converted property setter: - (void)setMontage:(id)montage;	// 0x342c8eb9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x342c6fb5
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x342c6145
// converted property setter: - (void)setParent:(id)parent;	// 0x342c8e09
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x342c6b29
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x342c6c19
// converted property setter: - (void)setPlug:(id)plug;	// 0x342c866d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x342c62e5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x342c649d
// converted property setter: - (void)setScale:(float)scale;	// 0x342c620d
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x342c9c8d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x342c6575
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x342c8f11
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x342c6e19
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x342c6919
// declared property setter: - (void)setTitle:(id)title;	// 0x342c5655
// converted property setter: - (void)setWidth:(float)width;	// 0x342c98f5
// converted property setter: - (void)setXPosition:(float)position;	// 0x342c978d
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x342c6665
// converted property setter: - (void)setYPosition:(float)position;	// 0x342c9805
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x342c672d
// converted property setter: - (void)setZIndex:(int)index;	// 0x342c681d
// converted property setter: - (void)setZPosition:(float)position;	// 0x342c63d5
// converted property getter: - (CGSize)size;	// 0x342c6545
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x342c8f01
// converted property getter: - (BOOL)startsPaused;	// 0x342c6df5
// converted property getter: - (double)timeIn;	// 0x342c68f9
// declared property getter: - (id)title;	// 0x342c5635
- (void)updateDurationPadding:(double)padding;	// 0x342c8f65
- (void)updateMainDuration;	// 0x342c9051
- (id)uuid;	// 0x342c7d8d
// converted property getter: - (float)width;	// 0x342c98b1
// converted property getter: - (float)xPosition;	// 0x342c9749
// converted property getter: - (float)xRotationAngle;	// 0x342c6645
// converted property getter: - (float)yPosition;	// 0x342c97c1
// converted property getter: - (float)yRotationAngle;	// 0x342c670d
// converted property getter: - (int)zIndex;	// 0x342c67d5
// converted property getter: - (float)zPosition;	// 0x342c63b5
@end

