/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerParallelizer, NSString;

@interface MCPlugParallel : MCPlug {
	NSString *mIDInSupercontainer;	// 60 = 0x3c
	NSString *mPageID;	// 64 = 0x40
	double mTimeIn;	// 68 = 0x44
	CGPoint mPosition;	// 76 = 0x4c
	CGSize mSize;	// 84 = 0x54
	float mScale;	// 92 = 0x5c
	float mZPosition;	// 96 = 0x60
	int mZIndex;	// 100 = 0x64
	float mRotationAngle;	// 104 = 0x68
	float mXRotationAngle;	// 108 = 0x6c
	float mYRotationAngle;	// 112 = 0x70
	float mOpacity;	// 116 = 0x74
	int mAudioPriority;	// 120 = 0x78
	MCContainerParallelizer *mSupercontainer;	// 124 = 0x7c
}
@property(assign, nonatomic) int audioPriority;	// G=0x32face4d; S=0x32face5d; @synthesize=mAudioPriority
@property(copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;	// G=0x32faccb9; S=0x32facccd; @synthesize=mIDInSupercontainer
@property(assign, nonatomic) BOOL isTriggered;	// G=0x32facb39; S=0x32facb51; 
@property(assign, nonatomic) float opacity;	// G=0x32face3d; S=0x32facb29; @synthesize=mOpacity
@property(copy) NSString *pageID;	// G=0x32faccf1; S=0x32facd05; @synthesize=mPageID
@property(assign, nonatomic) CGPoint position;	// G=0x32facd41; S=0x32facd5d; @synthesize=mPosition
@property(assign, nonatomic) float rotationAngle;	// G=0x32facddd; S=0x32facded; @synthesize=mRotationAngle
@property(assign, nonatomic) float scale;	// G=0x32facd8d; S=0x32facb05; @synthesize=mScale
@property(assign, nonatomic) CGSize size;	// G=0x32facd71; S=0x32facaf1; @synthesize=mSize
@property(assign) MCContainerParallelizer *supercontainer;	// G=0x32face6d; S=0x32face7d; @synthesize=mSupercontainer
@property(assign, nonatomic) double timeIn;	// G=0x32facd29; S=0x32facb15; @synthesize=mTimeIn
@property(assign, nonatomic) float xRotationAngle;	// G=0x32facdfd; S=0x32face0d; @synthesize=mXRotationAngle
@property(assign, nonatomic) float yRotationAngle;	// G=0x32face1d; S=0x32face2d; @synthesize=mYRotationAngle
@property(assign, nonatomic) int zIndex;	// G=0x32facdbd; S=0x32facdcd; @synthesize=mZIndex
@property(assign, nonatomic) float zPosition;	// G=0x32facd9d; S=0x32facdad; @synthesize=mZPosition
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32fac029
- (id)init;	// 0x32fac0f1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32fac141
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32facb79
// declared property getter: - (int)audioPriority;	// 0x32face4d
- (void)demolish;	// 0x32fac551
// declared property getter: - (id)idInSupercontainer;	// 0x32faccb9
- (id)imprint;	// 0x32fac5d5
// declared property getter: - (BOOL)isTriggered;	// 0x32facb39
// declared property getter: - (float)opacity;	// 0x32face3d
// declared property getter: - (id)pageID;	// 0x32faccf1
// declared property getter: - (CGPoint)position;	// 0x32facd41
// declared property getter: - (float)rotationAngle;	// 0x32facddd
// declared property getter: - (float)scale;	// 0x32facd8d
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x32face5d
// declared property setter: - (void)setIDInSupercontainer:(id)supercontainer;	// 0x32facccd
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32facb51
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x32facb29
// declared property setter: - (void)setPageID:(id)anId;	// 0x32facd05
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x32facd5d
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x32facded
// declared property setter: - (void)setScale:(float)scale;	// 0x32facb05
// declared property setter: - (void)setSize:(CGSize)size;	// 0x32facaf1
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x32face7d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x32facb15
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x32face0d
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x32face2d
// declared property setter: - (void)setZIndex:(int)index;	// 0x32facdcd
// declared property setter: - (void)setZPosition:(float)position;	// 0x32facdad
// declared property getter: - (CGSize)size;	// 0x32facd71
// declared property getter: - (id)supercontainer;	// 0x32face6d
// declared property getter: - (double)timeIn;	// 0x32facd29
// declared property getter: - (float)xRotationAngle;	// 0x32facdfd
// declared property getter: - (float)yRotationAngle;	// 0x32face1d
// declared property getter: - (int)zIndex;	// 0x32facdbd
// declared property getter: - (float)zPosition;	// 0x32facd9d
@end

