/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class NSMutableDictionary, NSString, NSMutableArray, NSArray, MPAudioPlaylist, NSDictionary, MCContainerParallelizer, MPLayerGroupInternal, MCPlugParallel;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x3208acb1; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3208a3b9; converted property
@property(copy, nonatomic) NSArray *audioPaths;	// G=0x32089799; S=0x320897a9; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x320887b5; S=0x320887c9; converted property
@property(retain) id authoredVersionInfo;	// G=0x3208e25d; S=0x3208e27d; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x32087425; S=0x32087569; converted property
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x32089e59; S=0x32089e7d; @dynamic
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// G=0x32088ca1; S=0x32088cfd; @dynamic
@property(retain) id container;	// G=0x3208bbd9; S=0x3208bbe9; converted property
@property(assign) double duration;	// G=0x320884b9; S=0x32088561; converted property
@property(assign) double durationPadding;	// G=0x3208d0f1; S=0x3208d111; converted property
@property(assign, nonatomic) NSDictionary *initialState;	// G=0x32089145; S=0x32089165; 
@property(assign) BOOL isTriggered;	// G=0x320886cd; S=0x320886f1; converted property
@property(assign) int lastSlideUsed;	// G=0x320900c9; S=0x32090011; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x32087735; converted property
@property(assign, nonatomic) int loopingMode;	// G=0x32088bf1; S=0x32088c11; @dynamic
@property(assign) double numberOfLoops;	// G=0x320899c1; S=0x320899e1; converted property
@property(assign) float opacity;	// G=0x3208a605; S=0x3208a625; converted property
@property(retain) id parent;	// G=0x320887a5; S=0x3208b8a1; converted property
@property(assign) double phaseInDuration;	// G=0x32089b61; S=0x32089b81; converted property
@property(assign) double phaseOutDuration;	// G=0x32089cd1; S=0x32089cf1; converted property
@property(retain) MCPlugParallel *plug;	// G=0x3208ae6d; S=0x3208bd41; converted property
@property(assign) CGPoint position;	// G=0x3208a6b9; S=0x3208a6e9; converted property
@property(assign) float rotationAngle;	// G=0x3208a82d; S=0x3208a84d; converted property
@property(assign) float scale;	// G=0x3208ab09; S=0x3208ab29; converted property
@property(assign) CGSize size;	// G=0x3208a8e1; S=0x3208a911; converted property
@property(assign) BOOL startsPaused;	// G=0x32088739; S=0x3208875d; converted property
@property(assign) double timeIn;	// G=0x32088651; S=0x32088671; converted property
@property(readonly, assign, nonatomic) NSString *uuid;	// G=0x32089125; 
@property(copy, nonatomic) NSArray *videoPaths;	// G=0x320894a5; S=0x32089759; @dynamic
@property(assign) float xRotationAngle;	// G=0x3208a9a1; S=0x3208a9c1; converted property
@property(assign) float yRotationAngle;	// G=0x3208aa55; S=0x3208aa75; converted property
@property(assign) int zIndex;	// G=0x3208abbd; S=0x3208ac41; converted property
@property(assign) float zPosition;	// G=0x3208a779; S=0x3208a799; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32084c39
- (id)init;	// 0x32084cb9
- (id)initWithCoder:(id)coder;	// 0x320859e9
- (id)absoluteVideoPaths;	// 0x3208b615
- (id)actionForKey:(id)key;	// 0x3208acc1
- (id)actionableObjectForID:(id)anId;	// 0x32090139
// converted property getter: - (id)actions;	// 0x3208acb1
- (void)addAudioPath:(id)path;	// 0x3208928d
- (void)addAudioPaths:(id)paths;	// 0x320892f9
- (void)addLayer:(id)layer;	// 0x32087745
- (void)addLayers:(id)layers;	// 0x320877a1
- (void)addVideoPath:(id)path;	// 0x320891b5
- (void)addVideoPaths:(id)paths;	// 0x32089221
- (id)allEffectContainers;	// 0x3208ae7d
- (id)allEffects;	// 0x3208af75
- (id)allSlides:(BOOL)slides;	// 0x3208b075
- (id)allSongs;	// 0x3208b249
- (id)animationPathForKey:(id)key;	// 0x3208a3c9
// converted property getter: - (id)animationPaths;	// 0x3208a3b9
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x3208ecd5
// declared property getter: - (id)audioPaths;	// 0x32089799
// converted property getter: - (id)audioPlaylist;	// 0x320887b5
// converted property getter: - (id)authoredVersionInfo;	// 0x3208e25d
- (id)authoringOptionForKey:(id)key;	// 0x32087549
// converted property getter: - (id)authoringOptions;	// 0x32087425
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x32089e59
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x32088ca1
- (void)cachePaths;	// 0x3208b83d
- (void)cleanup;	// 0x3208cb1d
- (void)configureActions;	// 0x3208b991
// converted property getter: - (id)container;	// 0x3208bbd9
- (void)copyActions:(id)actions;	// 0x3208e159
- (void)copyAnimationPaths:(id)paths;	// 0x3208e055
- (void)copyAudioPlaylist:(id)playlist;	// 0x3208e011
- (void)copyLayerDictionary:(id)dictionary;	// 0x3208df0d
- (void)copyLayers:(id)layers;	// 0x3208dde1
- (void)copyStruct:(id)aStruct;	// 0x3208d9e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32086895
- (int)countOfLayers;	// 0x32090431
- (void)dealloc;	// 0x32086a39
- (BOOL)detectFacesInBackground;	// 0x320903f5
// converted property getter: - (double)duration;	// 0x320884b9
// converted property getter: - (double)durationPadding;	// 0x3208d0f1
- (void)encodeWithCoder:(id)coder;	// 0x32085051
- (void)finalize;	// 0x320869f9
// declared property getter: - (id)initialState;	// 0x32089145
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x320877e1
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x32090559
// converted property getter: - (BOOL)isTriggered;	// 0x320886cd
- (id)keyedLayers;	// 0x32089f15
// converted property getter: - (int)lastSlideUsed;	// 0x320900c9
- (id)layerForKey:(id)key;	// 0x32089f25
- (id)layerKey;	// 0x32089e9d
- (id)layerKeyDictionary;	// 0x320903d5
// converted property getter: - (id)layers;	// 0x32087735
- (BOOL)layersCanPositionZIndex;	// 0x3208b825
- (id)liveLock;	// 0x3208e29d
// declared property getter: - (int)loopingMode;	// 0x32088bf1
- (id)mainLayers;	// 0x32089829
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x320880c9
- (id)navigatorKey;	// 0x32086b99
- (BOOL)nearingEndWithOptions:(id)options;	// 0x3208e2bd
- (BOOL)needsToRemoveFadeIn;	// 0x3208f63d
// converted property getter: - (double)numberOfLoops;	// 0x320899c1
- (id)objectID;	// 0x3208b805
- (id)objectInLayersAtIndex:(int)index;	// 0x32090451
- (id)observer;	// 0x3208b841
// converted property getter: - (float)opacity;	// 0x3208a605
- (id)orderedVideoPaths;	// 0x320894b5
// converted property getter: - (id)parent;	// 0x320887a5
- (id)parentDocument;	// 0x3208b765
// converted property getter: - (double)phaseInDuration;	// 0x32089b61
// converted property getter: - (double)phaseOutDuration;	// 0x32089cd1
// converted property getter: - (id)plug;	// 0x3208ae6d
- (id)plugID;	// 0x3208b7e5
// converted property getter: - (CGPoint)position;	// 0x3208a6b9
- (double)posterTime;	// 0x3208b445
- (void)reconfigureLoopingMode;	// 0x3208d341
- (void)reconnectAll;	// 0x3208d189
- (void)removeActionForKey:(id)key;	// 0x3208adf5
- (void)removeAllAudioPaths;	// 0x32089809
- (void)removeAllLayers;	// 0x32087b39
- (void)removeAllVideoPaths;	// 0x320897e9
- (void)removeAnimationPathForKey:(id)key;	// 0x3208a579
- (double)removeFadeInIfNeeded;	// 0x3208f911
- (void)removeLayerForKey:(id)key;	// 0x3208a139
- (void)removeLayersAtIndices:(id)indices;	// 0x32087c8d
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x32090599
- (void)removePath:(id)path;	// 0x32089365
- (void)removePaths:(id)paths;	// 0x320893ed
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x320905d5
- (void)resetDuration;	// 0x3208cd19
// converted property getter: - (float)rotationAngle;	// 0x3208a82d
// converted property getter: - (float)scale;	// 0x3208ab09
- (void)setAction:(id)action forKey:(id)key;	// 0x3208ace1
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3208a3e9
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x320897a9
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x320887c9
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x3208e27d
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x32087435
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x32087569
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x32089e7d
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x32088cfd
- (void)setBackgroundColorString:(id)string;	// 0x32088cc1
// converted property setter: - (void)setContainer:(id)container;	// 0x3208bbe9
// converted property setter: - (void)setDuration:(double)duration;	// 0x32088561
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x3208d111
// declared property setter: - (void)setInitialState:(id)state;	// 0x32089165
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x32090119
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x320886f1
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x32090011
- (void)setLayer:(id)layer forKey:(id)key;	// 0x32089f45
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x32088c11
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x320899e1
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3208a625
// converted property setter: - (void)setParent:(id)parent;	// 0x3208b8a1
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32089b81
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32089cf1
// converted property setter: - (void)setPlug:(id)plug;	// 0x3208bd41
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3208a6e9
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3208a84d
// converted property setter: - (void)setScale:(float)scale;	// 0x3208ab29
// converted property setter: - (void)setSize:(CGSize)size;	// 0x3208a911
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x3208875d
- (unsigned)setStyleID:(id)anId;	// 0x32086c51
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x32088671
- (void)setUsedAllPaths:(BOOL)paths;	// 0x3208fff1
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x32089759
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x3208a9c1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3208aa75
// converted property setter: - (void)setZIndex:(int)index;	// 0x3208ac41
// converted property setter: - (void)setZPosition:(float)position;	// 0x3208a799
// converted property getter: - (CGSize)size;	// 0x3208a8e1
// converted property getter: - (BOOL)startsPaused;	// 0x32088739
- (id)styleID;	// 0x32086c25
// converted property getter: - (double)timeIn;	// 0x32088651
// declared property getter: - (id)uuid;	// 0x32089125
- (id)valueInLayersWithName:(id)name;	// 0x32090471
- (double)videoDuration;	// 0x32088341
// declared property getter: - (id)videoPaths;	// 0x320894a5
// converted property getter: - (float)xRotationAngle;	// 0x3208a9a1
// converted property getter: - (float)yRotationAngle;	// 0x3208aa55
// converted property getter: - (int)zIndex;	// 0x3208abbd
// converted property getter: - (float)zPosition;	// 0x3208a779
@end

