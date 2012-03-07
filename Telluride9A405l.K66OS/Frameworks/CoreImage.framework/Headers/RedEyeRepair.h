/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface RedEyeRepair : NSObject {
@private
	BOOL ownLF;	// 4 = 0x4
	XXStruct_kb0fHB *lf;	// 8 = 0x8
	int imageSourceType;	// 12 = 0xc
	CGImageBlockSetRef blockSet;	// 16 = 0x10
	void *releaseMe;	// 20 = 0x14
	CFDataRef dataRef;	// 24 = 0x18
	NSArray *faces;	// 28 = 0x1c
	int nRepairs;	// 32 = 0x20
	int nextRepairTag;	// 36 = 0x24
	XXStruct_WqZPoA repairs[32];	// 40 = 0x28
	int lastRepairTag;	// 11176 = 0x2ba8
	float lastRepairIOD;	// 11180 = 0x2bac
	XXStruct_ck5uzC standardTemplate;	// 11184 = 0x2bb0
	int iFaceIndex;	// 11200 = 0x2bc0
	BOOL iLeft;	// 11204 = 0x2bc4
	BOOL debugRedEye;	// 11205 = 0x2bc5
	BOOL logRepairs;	// 11206 = 0x2bc6
	int redEyeThresholdKind;	// 11208 = 0x2bc8
	BOOL renderAlpha;	// 11212 = 0x2bcc
	BOOL infillBackground;	// 11213 = 0x2bcd
	BOOL renderSpecularShine;	// 11214 = 0x2bce
	float specularSize;	// 11216 = 0x2bd0
	float specularSoftness;	// 11220 = 0x2bd4
	BOOL pupilShadeAlignment;	// 11224 = 0x2bd8
	BOOL autoPupilTonality;	// 11225 = 0x2bd9
	BOOL forceLoValue;	// 11226 = 0x2bda
	int loValue;	// 11228 = 0x2bdc
	XXStruct_7sjjeB lastClickYBitmap;	// 11232 = 0x2be0
	XXStruct_7sjjeB lastClickCbCrBitmap;	// 11268 = 0x2c04
	int lastClickBitmapMinX;	// 11304 = 0x2c28
	int lastClickBitmapMaxX;	// 11308 = 0x2c2c
	int lastClickBitmapMinY;	// 11312 = 0x2c30
	int lastClickBitmapMaxY;	// 11316 = 0x2c34
	XXStruct_7sjjeB lastClickYBitmaps[3];	// 11320 = 0x2c38
	XXStruct_7sjjeB lastClickCbCrBitmaps[3];	// 11428 = 0x2ca4
	XXStruct_ck5uzC lastClickIRects[3];	// 11536 = 0x2d10
	XXStruct_7sjjeB lastSearchYBitmap;	// 11584 = 0x2d40
	XXStruct_7sjjeB lastSearchCbCrBitmap;	// 11620 = 0x2d64
	int lastSearchBitmapMinX;	// 11656 = 0x2d88
	int lastSearchBitmapMaxX;	// 11660 = 0x2d8c
	int lastSearchBitmapMinY;	// 11664 = 0x2d90
	int lastSearchBitmapMaxY;	// 11668 = 0x2d94
	int nPolyPoints;	// 11672 = 0x2d98
	BOOL polyClosed;	// 11676 = 0x2d9c
	CGPoint polyPoints[20];	// 11680 = 0x2da0
	struct {
		float a;
		float b;
		float c;
	} polyLines[20];	// 11840 = 0x2e40
	BOOL polyPointConcave[20];	// 12080 = 0x2f30
	unsigned char CbCrDistanceTable[65536];	// 12100 = 0x2f44
	int nLinears;	// 77636 = 0x12f44
	int linearCoefficients[8][3];	// 77640 = 0x12f48
}
@property(assign) BOOL autoPupilTonality;	// G=0x36eda5fd; S=0x36eda60d; converted property
@property(assign) BOOL debug;	// G=0x36eda4dd; S=0x36eda4ed; converted property
@property(readonly, retain) NSArray *faces;	// G=0x36eda681; converted property
@property(assign) BOOL forceLoValue;	// G=0x36eda61d; S=0x36eda62d; converted property
@property(assign) BOOL infillBackground;	// G=0x36eda55d; S=0x36eda56d; converted property
@property(readonly, assign) int lastRepairTag;	// G=0x36eda6b1; converted property
@property(assign) int loValue;	// G=0x36eda63d; S=0x36eda64d; converted property
@property(assign) BOOL logRepairs;	// G=0x36eda4fd; S=0x36eda50d; converted property
@property(readonly, assign) int nRepairs;	// G=0x36eda6a1; converted property
@property(assign) BOOL pupilShadeAlignment;	// G=0x36eda5dd; S=0x36eda5ed; converted property
@property(assign) int redEyeThresholdKind;	// G=0x36eda51d; S=0x36eda52d; converted property
@property(assign) BOOL renderAlpha;	// G=0x36eda53d; S=0x36eda54d; converted property
@property(assign) BOOL renderSpecularShine;	// G=0x36eda57d; S=0x36eda58d; converted property
@property(assign) float specularSize;	// G=0x36eda59d; S=0x36eda5ad; converted property
@property(assign) float specularSoftness;	// G=0x36eda5bd; S=0x36eda5cd; converted property
@property(readonly, assign) XXStruct_ck5uzC standardTemplate;	// G=0x36eda65d; converted property
+ (CGRect)supportRectangleWithFaceArray:(id)faceArray imageSize:(CGSize)size;	// 0x36edab9d
+ (CGRect)supportRectangleWithPoint:(CGPoint)point imageSize:(CGSize)size IOD:(float)iod;	// 0x36eda9b9
+ (CGRect)supportRectangleWithRepair:(id)repair imageSize:(CGSize)size;	// 0x36edaa55
+ (float)upperRepairDistance:(float)distance;	// 0x36eda919
+ (float)upperRepairDistanceFraction:(float)fraction;	// 0x36eda8d5
- (id)initWithCGImage:(CGImageRef)cgimage cameraModel:(id)model;	// 0x36ed9abd
- (id)initWithDeskView:(id)deskView andFrame:(XXStruct_kb0fHB *)frame;	// 0x36eda0b1
- (id)initWithExternalBuffer:(char *)externalBuffer size:(CGSize)size rowBytes:(unsigned long)bytes;	// 0x36eda181
- (id)initWithExternalBuffer:(char *)externalBuffer subRectangle:(CGRect)rectangle fullSize:(CGSize)size rowBytes:(unsigned long)bytes cameraModel:(id)model;	// 0x36eda231
- (id)initWithFrameExternalBuffer:(XXStruct_kb0fHB *)frameExternalBuffer;	// 0x36eda111
- (id)initWithIOSurface:(IOSurfaceRef)iosurface format:(int)format colorSpace:(CGColorSpaceRef)space cameraModel:(id)model;	// 0x36ed9e45
// converted property getter: - (BOOL)autoPupilTonality;	// 0x36eda5fd
- (void)autoRepairExtractAndSearchLeft:(XXStruct_ck5uzC)left right:(XXStruct_ck5uzC)right data:(XXStruct_$ifKmC *)data repairSize:(float)size autoPupilTonality:(BOOL)tonality faceIndex:(int)index;	// 0x36ede0d1
- (void)autoRepairWithFaceArray:(id)faceArray;	// 0x36edfed1
- (int)averageValueFromY:(XXStruct_7sjjeB *)y withinSkinMask:(XXStruct_7sjjeB *)mask butOutsideAlpha:(XXStruct_7sjjeB *)alpha;	// 0x36eda77d
- (BOOL)computeTrimmedBitmaps:(XXStruct_7sjjeB *)bitmaps newY:(XXStruct_7sjjeB *)y newCbCr:(XXStruct_7sjjeB *)cr IR:(XXStruct_ck5uzC)ir newTrimY:(XXStruct_7sjjeB *)y5 newTrimCbCr:(XXStruct_7sjjeB *)cr6 returningYR:(XXStruct_ck5uzC *)yr andCbCrR:(XXStruct_ck5uzC *)r;	// 0x36edb415
- (float)confidenceWithIOD:(float)iod repair:(int)repair andProminenceDifference:(int)difference;	// 0x36edd06d
- (CGImageRef)createRepairedImage;	// 0x36ed9c65
- (void)dealloc;	// 0x36eda335
// converted property getter: - (BOOL)debug;	// 0x36eda4dd
- (int)distanceMaskFromPolyToCb:(int)cb Cr:(int)cr;	// 0x36edeff5
- (void)executeRepair:(id)repair;	// 0x36ee1121
- (void)executeRepairArray:(id)array;	// 0x36ee1ed1
- (float)extractAverageFaceY:(XXStruct_$ifKmC *)y contrast:(float *)contrast faceIndex:(int)index;	// 0x36edcd81
- (BOOL)extractReusableAlignedBitmapsAroundPoint:(XXStruct_7sjjeB *)point YR:(XXStruct_ck5uzC)yr subYBitmap:(XXStruct_7sjjeB *)bitmap subCbCrBitmap:(XXStruct_7sjjeB *)bitmap4;	// 0x36edb809
// converted property getter: - (id)faces;	// 0x36eda681
// converted property getter: - (BOOL)forceLoValue;	// 0x36eda61d
- (int)format;	// 0x36eda6c1
- (BOOL)gatherProminencesWithC:(XXStruct_7sjjeB *)c MC:(XXStruct_7sjjeB *)mc altC:(XXStruct_7sjjeB *)c3 altMC:(XXStruct_7sjjeB *)mc4 maxwindowsize:(int)maxwindowsize repairsize:(int)repairsize IR:(XXStruct_ck5uzC)ir fr:(XXStruct_$ifKmC *)fr intoHopper:(XXStruct_2IQLbD *)hopper faceIndex:(int)index left:(BOOL)left;	// 0x36edd3b1
- (BOOL)getBlockSetWithImage:(CGImageRef)image into:(XXStruct_7sjjeB *)into width:(unsigned long)width height:(unsigned long)height;	// 0x36ed9845
- (BOOL)getBool:(BOOL *)aBool d:(id)d s:(id)s;	// 0x36ee10e9
- (BOOL)getDataProviderBytePtrWithImage:(CGImageRef)image into:(XXStruct_7sjjeB *)into width:(unsigned long)width height:(unsigned long)height;	// 0x36ed998d
- (BOOL)getDataProviderCopyWithImage:(CGImageRef)image into:(XXStruct_7sjjeB *)into;	// 0x36ed9a09
- (BOOL)getFloat:(float *)aFloat d:(id)d s:(id)s;	// 0x36ee106d
- (BOOL)getInt:(int *)int d:(id)d s:(id)s;	// 0x36ee10b1
// converted property getter: - (BOOL)infillBackground;	// 0x36eda55d
- (void)initializeNonDebugVariables;	// 0x36ed9f85
- (void)insertIntoProminenceVettingHopper:(XXStruct_2IQLbD *)hopper max:(int)max outside:(int)outside confidence:(float)confidence distance:(float)distance row:(int)row column:(int)column IOD:(float)iod;	// 0x36edd21d
// converted property getter: - (int)lastRepairTag;	// 0x36eda6b1
// converted property getter: - (int)loValue;	// 0x36eda63d
// converted property getter: - (BOOL)logRepairs;	// 0x36eda4fd
- (float)lowerRepairSize:(float)size;	// 0x36eda98d
- (float)lowerRepairSizeFraction:(float)fraction;	// 0x36eda885
// converted property getter: - (int)nRepairs;	// 0x36eda6a1
- (void)prepareLineFunctions;	// 0x36edf07d
// converted property getter: - (BOOL)pupilShadeAlignment;	// 0x36eda5dd
- (int)redEyeRemovalWithData:(XXStruct_eP6C5A)data;	// 0x36edf58d
- (int)redEyeRemovalWithPoint:(CGPoint)point alignPupilShades:(BOOL)shades matching:(XXStruct_ck5uzC)matching force:(int)force IOD:(float)iod tap:(BOOL)tap;	// 0x36edbae1
// converted property getter: - (int)redEyeThresholdKind;	// 0x36eda51d
- (void)redoLastRepair;	// 0x36edcd45
- (int)redoRepairWithTag:(int)tag IOD:(float)iod;	// 0x36edcc71
// converted property getter: - (BOOL)renderAlpha;	// 0x36eda53d
// converted property getter: - (BOOL)renderSpecularShine;	// 0x36eda57d
- (id)repairArray;	// 0x36ee0815
- (void)repairExternalBuffer;	// 0x36ed9db9
- (XXStruct_WqZPoA *)repairWithTag:(int)tag;	// 0x36edcc25
- (XXStruct_WqZPoA *)repairs;	// 0x36eda691
// converted property setter: - (void)setAutoPupilTonality:(BOOL)tonality;	// 0x36eda60d
- (void)setColorSpace:(CGColorSpaceRef)space;	// 0x36ed9a8d
// converted property setter: - (void)setDebug:(BOOL)debug;	// 0x36eda4ed
- (void)setFaceIndex:(int)index;	// 0x36ee1f31
// converted property setter: - (void)setForceLoValue:(BOOL)value;	// 0x36eda62d
// converted property setter: - (void)setInfillBackground:(BOOL)background;	// 0x36eda56d
- (void)setLeft:(BOOL)left;	// 0x36ee1f41
// converted property setter: - (void)setLoValue:(int)value;	// 0x36eda64d
// converted property setter: - (void)setLogRepairs:(BOOL)repairs;	// 0x36eda50d
// converted property setter: - (void)setPupilShadeAlignment:(BOOL)alignment;	// 0x36eda5ed
// converted property setter: - (void)setRedEyeThresholdKind:(int)kind;	// 0x36eda52d
// converted property setter: - (void)setRenderAlpha:(BOOL)alpha;	// 0x36eda54d
// converted property setter: - (void)setRenderSpecularShine:(BOOL)shine;	// 0x36eda58d
// converted property setter: - (void)setSpecularSize:(float)size;	// 0x36eda5ad
// converted property setter: - (void)setSpecularSoftness:(float)softness;	// 0x36eda5cd
- (void)skinInit;	// 0x36edf4e9
// converted property getter: - (float)specularSize;	// 0x36eda59d
// converted property getter: - (float)specularSoftness;	// 0x36eda5bd
// converted property getter: - (XXStruct_ck5uzC)standardTemplate;	// 0x36eda65d
- (void)undoRepair:(int)repair;	// 0x36eda6d5
- (float)upperRepairSize:(float)size;	// 0x36eda961
- (float)upperRepairSizeFraction:(float)fraction;	// 0x36eda835
@end

