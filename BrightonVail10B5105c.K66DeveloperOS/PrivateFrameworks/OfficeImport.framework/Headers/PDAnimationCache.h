/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimateMotionBehavior, PDBuild, PDAnimationTargetElement, NSString;

@interface PDAnimationCache : NSObject {
	int mNodeType;	// 4 = 0x4
	int mPresetId;	// 8 = 0x8
	int mPresetSubType;	// 12 = 0xc
	int mPresetClass;	// 16 = 0x10
	PDAnimationTargetElement *mTargetElement;	// 20 = 0x14
	BOOL mHasDelay;	// 24 = 0x18
	double mDelay;	// 28 = 0x1c
	BOOL mHasDuration;	// 36 = 0x24
	double mDuration;	// 40 = 0x28
	BOOL mHasDirection;	// 48 = 0x30
	double mDirection;	// 52 = 0x34
	BOOL mHasPartCount;	// 60 = 0x3c
	int mPartCount;	// 64 = 0x40
	PDAnimateMotionBehavior *mMotionPath;	// 68 = 0x44
	BOOL mHasValue;	// 72 = 0x48
	double mValue;	// 76 = 0x4c
	PDBuild *mBuild;	// 84 = 0x54
	int mIterateType;	// 88 = 0x58
	BOOL mIsHead;	// 92 = 0x5c
	int mLevel;	// 96 = 0x60
	NSString *mGroupId;	// 100 = 0x64
}
@property(retain, nonatomic) PDBuild *build;	// G=0x37b2957d; S=0x37b2958d; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x37b2940d; S=0x37b28f71; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x37b2947d; S=0x37b28fc1; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x37b29445; S=0x37b28f99; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x37b2951d; S=0x37b2952d; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x37b293ed; S=0x37b293fd; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x37b2945d; S=0x37b2946d; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x37b29425; S=0x37b29435; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x37b29495; S=0x37b294a5; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x37b294e5; S=0x37b294f5; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x37b2953d; S=0x37b2954d; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x37b293cd; S=0x37b293dd; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x37b2955d; S=0x37b2956d; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x37b294c5; S=0x37b294d5; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x37b2934d; S=0x37b2935d; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x37b294b5; S=0x37b28fe9; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x37b293ad; S=0x37b293bd; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x37b2936d; S=0x37b2937d; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x37b2938d; S=0x37b2939d; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x37b2932d; S=0x37b2933d; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x37b29505; S=0x37b29009; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x37b291f1
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x37b29031
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x37b296f9
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x37b2959d
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x37b28bdd
// declared property getter: - (id)build;	// 0x37b2957d
- (void)dealloc;	// 0x37b28ee5
// declared property getter: - (double)delay;	// 0x37b2940d
// declared property getter: - (double)direction;	// 0x37b2947d
// declared property getter: - (double)duration;	// 0x37b29445
// declared property getter: - (id)groupId;	// 0x37b2951d
// declared property getter: - (BOOL)hasDelay;	// 0x37b293ed
// declared property getter: - (BOOL)hasDirection;	// 0x37b2945d
// declared property getter: - (BOOL)hasDuration;	// 0x37b29425
// declared property getter: - (BOOL)hasPartCount;	// 0x37b29495
// declared property getter: - (BOOL)hasValue;	// 0x37b294e5
// declared property getter: - (BOOL)isHead;	// 0x37b2953d
// declared property getter: - (int)iterateType;	// 0x37b293cd
// declared property getter: - (int)level;	// 0x37b2955d
// declared property getter: - (id)motionPath;	// 0x37b294c5
// declared property getter: - (int)nodeType;	// 0x37b2934d
// declared property getter: - (int)partCount;	// 0x37b294b5
// declared property getter: - (int)presetClass;	// 0x37b293ad
// declared property getter: - (int)presetId;	// 0x37b2936d
// declared property getter: - (int)presetSubType;	// 0x37b2938d
// declared property setter: - (void)setBuild:(id)build;	// 0x37b2958d
// declared property setter: - (void)setDelay:(double)delay;	// 0x37b28f71
// declared property setter: - (void)setDirection:(double)direction;	// 0x37b28fc1
// declared property setter: - (void)setDuration:(double)duration;	// 0x37b28f99
// declared property setter: - (void)setGroupId:(id)anId;	// 0x37b2952d
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x37b293fd
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x37b2946d
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x37b29435
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x37b294a5
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x37b294f5
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x37b2954d
// declared property setter: - (void)setIterateType:(int)type;	// 0x37b293dd
// declared property setter: - (void)setLevel:(int)level;	// 0x37b2956d
// declared property setter: - (void)setMotionPath:(id)path;	// 0x37b294d5
// declared property setter: - (void)setNodeType:(int)type;	// 0x37b2935d
// declared property setter: - (void)setPartCount:(int)count;	// 0x37b28fe9
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x37b293bd
// declared property setter: - (void)setPresetId:(int)anId;	// 0x37b2937d
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x37b2939d
// declared property setter: - (void)setTargetElement:(id)element;	// 0x37b2933d
// declared property setter: - (void)setValue:(double)value;	// 0x37b29009
// declared property getter: - (id)targetElement;	// 0x37b2932d
// declared property getter: - (double)value;	// 0x37b29505
@end
