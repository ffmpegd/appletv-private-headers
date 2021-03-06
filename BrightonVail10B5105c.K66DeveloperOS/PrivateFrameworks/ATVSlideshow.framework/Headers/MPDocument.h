/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MPDocumentInternal, NSArray, MCMontage;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {
	MCMontage *_montage;	// 4 = 0x4
	NSArray *_userProvidedStacks;	// 8 = 0x8
	NSMutableDictionary *_documentAttributes;	// 12 = 0xc
	NSMutableDictionary *_fileProperties;	// 16 = 0x10
	NSMutableDictionary *_layerGroups;	// 20 = 0x14
	BOOL _preserveMedia;	// 24 = 0x18
	id<MPAssetKeyDelegate> _assetKeyDelegate;	// 28 = 0x1c
	MPDocumentInternal *_internal;	// 32 = 0x20
}
@property(assign) id assetKeyDelegate;	// G=0x323e4489; S=0x323e449d; converted property
@property(retain) id audioPaths;	// G=0x323e51ed; S=0x323e5225; converted property
@property(retain) id audioPlaylist;	// G=0x323e5969; S=0x323e59a1; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x323e5885; S=0x323e58bd; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x323e4d95; converted property
@property(retain) id documentLayerGroup;	// G=0x323e7175; S=0x323e6a81; converted property
@property(retain) id fileURL;	// G=0x323e4601; S=0x323e4621; converted property
@property(retain) id lastRandomTransition;	// G=0x323e85f5; S=0x323e8615; converted property
@property(assign) int loopingMode;	// G=0x323e439d; S=0x323e43d5; converted property
@property(retain) id mediaProperties;	// G=0x323e3dd1; S=0x323e3de1; converted property
@property(retain) MCMontage *montage;	// G=0x323e5a15; S=0x323e7409; converted property
@property(assign) double numberOfLoops;	// G=0x323e4411; S=0x323e4449; converted property
@property(assign) BOOL preserveMedia;	// G=0x323e3db1; S=0x323e3dc1; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x323e457d; S=0x323e45a1; converted property
@property(retain) id stacks;	// G=0x323e50f1; S=0x323e5101; converted property
@property(retain) id styleID;	// G=0x323e9389; S=0x323e93c1; converted property
@property(retain) id title;	// G=0x323e9351; S=0x323e936d; converted property
@property(retain) id undoManager;	// G=0x323e45c1; S=0x323e45e1; converted property
@property(retain) id videoPaths;	// G=0x323e5141; S=0x323e51b1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x323e2945
+ (void)initialize;	// 0x323e2879
+ (BOOL)isNativeType:(id)type;	// 0x323e29c5
+ (id)readableTypes;	// 0x323e299d
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x323e27cd
+ (id)unarchiveDocumentFromData:(id)data withAssetKeyDelegate:(id)assetKeyDelegate error:(id *)error;	// 0x323e27f9
+ (id)writableTypes;	// 0x323e2975
- (id)init;	// 0x323e29e9
- (id)initWithCoder:(id)coder;	// 0x323e308d
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x323e9c4d
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation thumbnailIfPossible:(BOOL)possible now:(BOOL)now;	// 0x323e9c89
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation;	// 0x323e9e89
- (void)_setMediaProperties:(id)properties;	// 0x323e7449
- (id)absolutePathForAssetAtPath:(id)path;	// 0x323e93fd
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x323e9731
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x323e9bc9
- (id)absoluteVideoPaths;	// 0x323e7459
- (id)actionableObjectForID:(id)anId;	// 0x323e7011
- (void)addAudioPath:(id)path;	// 0x323e4f79
- (void)addAudioPaths:(id)paths;	// 0x323e4fb5
- (void)addLayer:(id)layer;	// 0x323e5339
- (void)addLayers:(id)layers;	// 0x323e53cd
- (void)addStacks:(id)stacks;	// 0x323e4ff1
- (void)addVideoPath:(id)path;	// 0x323e4f01
- (void)addVideoPaths:(id)paths;	// 0x323e4f3d
- (id)allEffectContainers;	// 0x323e5e7d
- (id)allEffects;	// 0x323e5eb5
- (id)allElements;	// 0x323e4901
- (id)allSlides;	// 0x323e4791
- (id)allSlides:(BOOL)slides;	// 0x323e47a5
- (id)allSongs;	// 0x323e5eed
- (id)altitudeForPath:(id)path;	// 0x323e7d21
- (int)antialiasLevel;	// 0x323e6079
- (unsigned)applyStyle:(id)style;	// 0x323e3bb9
- (id)areaForPath:(id)path;	// 0x323e7c61
- (float)aspectRatio;	// 0x323e8bbd
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x323e8c1d
// converted property getter: - (id)assetKeyDelegate;	// 0x323e4489
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x323ea0e5
// converted property getter: - (id)audioPaths;	// 0x323e51ed
// converted property getter: - (id)audioPlaylist;	// 0x323e5969
- (id)authoringOptionForKey:(id)key;	// 0x323e4321
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x323e5885
- (void)beginBatchModify;	// 0x323e4641
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x323e8cd1
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x323e8e41
- (id)captionForPath:(id)path;	// 0x323e79d1
- (id)cityForPath:(id)path;	// 0x323e7be1
- (void)cleanup;	// 0x323e4da5
- (void)configureActions;	// 0x323e9045
- (int)countOfLayers;	// 0x323e91e5
- (id)countryForPath:(id)path;	// 0x323e7b21
- (id)creationDateForPath:(id)path;	// 0x323e78c1
- (id)currentStyle;	// 0x323e3b81
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x323e9e11
- (void)dealloc;	// 0x323e3a75
- (id)definedPlaceNameForPath:(id)path;	// 0x323e7ce1
- (id)description;	// 0x323e396d
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x323e85e5
- (BOOL)detectFacesInBackground;	// 0x323e8c61
- (id)displayName;	// 0x323e3b75
- (id)documentAttributeForKey:(id)key;	// 0x323e3c1d
// converted property getter: - (id)documentAttributes;	// 0x323e4d95
// converted property getter: - (id)documentLayerGroup;	// 0x323e7175
- (void)dump;	// 0x323e5a25
- (double)duration;	// 0x323e58f9
- (double)durationForPath:(id)path;	// 0x323e6781
- (void)encodeWithCoder:(id)coder;	// 0x323e2ed9
- (void)endBatchModify;	// 0x323e46bd
- (double)fadeOutAudioDuration;	// 0x323e8635
// converted property getter: - (id)fileURL;	// 0x323e4601
- (void)finalize;	// 0x323e3a35
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x323e8571
- (id)fullDebugLog;	// 0x323e5a29
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x323e541d
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x323e9295
- (BOOL)isAudioAtPath:(id)path;	// 0x323e7515
- (BOOL)isImageAtPath:(id)path;	// 0x323e750d
- (BOOL)isInBatchModify;	// 0x323e9155
- (BOOL)isLive;	// 0x323e8c95
- (BOOL)isMovieAtPath:(id)path;	// 0x323e7511
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x323e9f25
- (id)keyedLayers;	// 0x323e5875
- (id)keywordsForPath:(id)path;	// 0x323e7949
// converted property getter: - (id)lastRandomTransition;	// 0x323e85f5
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x323e8051
- (id)latitudeForPath:(id)path;	// 0x323e7a11
- (id)layerForKey:(id)key;	// 0x323e564d
- (id)layers;	// 0x323e5301
- (BOOL)layersCanPositionZIndex;	// 0x323e9041
- (id)longitudeForPath:(id)path;	// 0x323e7a99
// converted property getter: - (int)loopingMode;	// 0x323e439d
- (id)mainLayers;	// 0x323e59dd
- (int)mapLevelForPath:(id)path;	// 0x323e84a9
- (id)marimbaDocument;	// 0x323ea191
// converted property getter: - (id)mediaProperties;	// 0x323e3dd1
- (int)mediaTypeForPath:(id)path;	// 0x323e68b1
// converted property getter: - (id)montage;	// 0x323e5a15
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x323e560d
- (BOOL)nearingEndWithOptions:(id)options;	// 0x323e8b6d
- (BOOL)needsToRemoveFadeIn;	// 0x323e91b1
- (id)neighborhoodForPath:(id)path;	// 0x323e7ca1
// converted property getter: - (double)numberOfLoops;	// 0x323e4411
- (id)objectInLayersAtIndex:(int)index;	// 0x323e921d
- (id)oceanForPath:(id)path;	// 0x323e7b61
- (id)orderedVideoPaths;	// 0x323e5179
- (void)organizeRandomTransitions;	// 0x323e8675
- (id)organizedRandomTransitions;	// 0x323e8b25
- (id)outroEffect;	// 0x323e5cc1
- (id)placeForPath:(id)path;	// 0x323e7c21
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x323e8131
- (double)posterTime;	// 0x323e6041
// converted property getter: - (BOOL)preserveMedia;	// 0x323e3db1
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x323e3f8d
- (id)propertiesForMediaPathAndCreateIfNeeded:(id)mediaPathAndCreateIfNeeded;	// 0x323e69c5
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x323e3a31
- (void)reconnectAllTransitions;	// 0x323e60c9
- (id)regionsOfInterestForPath:(id)path;	// 0x323e7519
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x323e752d
- (void)removeAllAudioPaths;	// 0x323e5299
- (void)removeAllLayers;	// 0x323e545d
- (void)removeAllStacks;	// 0x323e52d1
- (void)removeAllVideoPaths;	// 0x323e5261
- (double)removeFadeInIfNeeded;	// 0x323e9179
- (void)removeLayerForKey:(id)key;	// 0x323e5791
- (void)removeLayersAtIndices:(id)indices;	// 0x323e55d1
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x323e92d5
- (void)removePath:(id)path;	// 0x323e5079
- (void)removePaths:(id)paths;	// 0x323e50b5
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x323e42a5
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x323e9311
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x323e9fe1
- (CGSize)resolutionForPath:(id)path;	// 0x323e6219
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x323e457d
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x323e8d75
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x323e8ee5
- (void)setAlwaysLookupAbsolutePaths:(BOOL)paths;	// 0x323e9021
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x323e449d
- (void)setAudioFadeOutDuration:(double)duration;	// 0x323e8655
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x323e5225
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x323e59a1
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x323e435d
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x323e58bd
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x323e3ccd
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x323e6a81
// converted property setter: - (void)setFileURL:(id)url;	// 0x323e4621
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x323e8615
- (void)setLayer:(id)layer forKey:(id)key;	// 0x323e566d
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x323e43d5
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x323e3de1
// converted property setter: - (void)setMontage:(id)montage;	// 0x323e7409
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x323e4449
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x323e3dc1
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x323e400d
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x323e45a1
// converted property setter: - (void)setStacks:(id)stacks;	// 0x323e5101
// converted property setter: - (void)setStyleID:(id)anId;	// 0x323e93c1
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x323e8fb1
// converted property setter: - (void)setTitle:(id)title;	// 0x323e936d
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x323e45e1
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x323e51b1
- (void)setupDocumentLayerGroup;	// 0x323e6cf5
- (void)setupLayerGroups;	// 0x323e6f29
// converted property getter: - (id)stacks;	// 0x323e50f1
- (double)startTimeForAssetAtPath:(id)path;	// 0x323ea0e9
- (double)startTimeForPath:(id)path;	// 0x323e6521
- (id)stateForPath:(id)path;	// 0x323e7ba1
- (double)stopTimeForAssetAtPath:(id)path;	// 0x323ea13d
- (double)stopTimeForPath:(id)path;	// 0x323e6651
// converted property getter: - (id)styleID;	// 0x323e9389
- (CGImageRef)thumbnailCGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x323e9d95
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x323e7da9
// converted property getter: - (id)title;	// 0x323e9351
- (id)titleEffect;	// 0x323e5a2d
// converted property getter: - (id)undoManager;	// 0x323e45c1
- (void)upgradeDocument;	// 0x323e7195
- (id)uuid;	// 0x323e61f9
- (id)valueInLayersWithName:(id)name;	// 0x323e9259
- (double)videoDuration;	// 0x323e5931
// converted property getter: - (id)videoPaths;	// 0x323e5141
- (float)volumeForPath:(id)path;	// 0x323e7491
@end

