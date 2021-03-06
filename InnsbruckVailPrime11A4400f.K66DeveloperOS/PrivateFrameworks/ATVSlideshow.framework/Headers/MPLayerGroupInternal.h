/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MPLayerGroupInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	unsigned loopingMode;	// 12 = 0xc
	double durationPadding;	// 16 = 0x10
	double duration;	// 24 = 0x18
	double timeIn;	// 32 = 0x20
	double phaseInDuration;	// 40 = 0x28
	double phaseOutDuration;	// 48 = 0x30
	NSString *backgroundAudioID;	// 56 = 0x38
	CGColorRef backgroundColor;	// 60 = 0x3c
	NSDictionary *authoredVersionInfo;	// 64 = 0x40
	int sendLiveNotification;	// 68 = 0x44
	NSRecursiveLock *liveLock;	// 72 = 0x48
	BOOL autoAdjustDuration;	// 76 = 0x4c
	BOOL isDocumentLayerGroup;	// 77 = 0x4d
	BOOL isTriggered;	// 78 = 0x4e
	BOOL startsPaused;	// 79 = 0x4f
	BOOL usedAllPaths;	// 80 = 0x50
	float opacity;	// 84 = 0x54
	CGPoint position;	// 88 = 0x58
	float zPosition;	// 96 = 0x60
	CGSize size;	// 100 = 0x64
	float rotationAngle;	// 108 = 0x6c
	float xRotationAngle;	// 112 = 0x70
	float yRotationAngle;	// 116 = 0x74
	float scale;	// 120 = 0x78
	int zIndex;	// 124 = 0x7c
	NSString *uuid;	// 128 = 0x80
	NSMutableDictionary *layerKeyDictionary;	// 132 = 0x84
	NSDictionary *initialState;	// 136 = 0x88
}
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x2fbbed79; S=0x2fbbed89; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x2fbbedd9; S=0x2fbbede9; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x2fbbed29; S=0x2fbbed39; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x2fbbed69; S=0x2fbbebb9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x2fbbec39; S=0x2fbbec51; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x2fbbec0d; S=0x2fbbec25; @synthesize
@property(retain, nonatomic) NSDictionary *initialState;	// G=0x2fbbef91; S=0x2fbbefa1; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x2fbbedf9; S=0x2fbbee09; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x2fbbec91; S=0x2fbbeca1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x2fbbef71; S=0x2fbbef81; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x2fbbedb9; S=0x2fbbedc9; @synthesize
@property(assign, nonatomic) unsigned loopingMode;	// G=0x2fbbed49; S=0x2fbbed59; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x2fbbebe1; S=0x2fbbebf9; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x2fbbee19; S=0x2fbbee29; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x2fbbecd1; S=0x2fbbece9; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x2fbbecfd; S=0x2fbbed15; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x2fbbee39; S=0x2fbbee51; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x2fbbeeb1; S=0x2fbbeec1; @synthesize
@property(assign, nonatomic) float scale;	// G=0x2fbbef11; S=0x2fbbef21; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x2fbbed99; S=0x2fbbeda9; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x2fbbee85; S=0x2fbbee9d; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x2fbbecb1; S=0x2fbbecc1; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x2fbbec65; S=0x2fbbec7d; @synthesize
@property(assign, nonatomic) BOOL usedAllPaths;	// G=0x2fbbefb1; S=0x2fbbefc1; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x2fbbef31; S=0x2fbbef41; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x2fbbeed1; S=0x2fbbeee1; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x2fbbeef1; S=0x2fbbef01; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x2fbbef51; S=0x2fbbef61; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x2fbbee65; S=0x2fbbee75; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x2fbbed79
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x2fbbedd9
// declared property getter: - (id)backgroundAudioID;	// 0x2fbbed29
// declared property getter: - (CGColorRef)backgroundColor;	// 0x2fbbed69
- (void)dealloc;	// 0x2fbbeacd
// declared property getter: - (double)duration;	// 0x2fbbec39
// declared property getter: - (double)durationPadding;	// 0x2fbbec0d
- (void)finalize;	// 0x2fbbea89
// declared property getter: - (id)initialState;	// 0x2fbbef91
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x2fbbedf9
// declared property getter: - (BOOL)isTriggered;	// 0x2fbbec91
// declared property getter: - (id)layerKeyDictionary;	// 0x2fbbef71
// declared property getter: - (id)liveLock;	// 0x2fbbedb9
// declared property getter: - (unsigned)loopingMode;	// 0x2fbbed49
// declared property getter: - (double)numberOfLoops;	// 0x2fbbebe1
// declared property getter: - (float)opacity;	// 0x2fbbee19
// declared property getter: - (double)phaseInDuration;	// 0x2fbbecd1
// declared property getter: - (double)phaseOutDuration;	// 0x2fbbecfd
// declared property getter: - (CGPoint)position;	// 0x2fbbee39
// declared property getter: - (float)rotationAngle;	// 0x2fbbeeb1
// declared property getter: - (float)scale;	// 0x2fbbef11
// declared property getter: - (int)sendLiveNotification;	// 0x2fbbed99
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x2fbbed89
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x2fbbede9
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x2fbbed39
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x2fbbebb9
// declared property setter: - (void)setDuration:(double)duration;	// 0x2fbbec51
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x2fbbec25
// declared property setter: - (void)setInitialState:(id)state;	// 0x2fbbefa1
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x2fbbee09
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x2fbbeca1
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x2fbbef81
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x2fbbedc9
// declared property setter: - (void)setLoopingMode:(unsigned)mode;	// 0x2fbbed59
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x2fbbebf9
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x2fbbee29
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x2fbbece9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x2fbbed15
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x2fbbee51
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x2fbbeec1
// declared property setter: - (void)setScale:(float)scale;	// 0x2fbbef21
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x2fbbeda9
// declared property setter: - (void)setSize:(CGSize)size;	// 0x2fbbee9d
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x2fbbecc1
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x2fbbec7d
// declared property setter: - (void)setUsedAllPaths:(BOOL)paths;	// 0x2fbbefc1
// declared property setter: - (void)setUuid:(id)uuid;	// 0x2fbbef41
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x2fbbeee1
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x2fbbef01
// declared property setter: - (void)setZIndex:(int)index;	// 0x2fbbef61
// declared property setter: - (void)setZPosition:(float)position;	// 0x2fbbee75
// declared property getter: - (CGSize)size;	// 0x2fbbee85
// declared property getter: - (BOOL)startsPaused;	// 0x2fbbecb1
// declared property getter: - (double)timeIn;	// 0x2fbbec65
// declared property getter: - (BOOL)usedAllPaths;	// 0x2fbbefb1
// declared property getter: - (id)uuid;	// 0x2fbbef31
// declared property getter: - (float)xRotationAngle;	// 0x2fbbeed1
// declared property getter: - (float)yRotationAngle;	// 0x2fbbeef1
// declared property getter: - (int)zIndex;	// 0x2fbbef51
// declared property getter: - (float)zPosition;	// 0x2fbbee65
@end

