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
@property(retain, nonatomic) PDBuild *build;	// G=0x36c4d57d; S=0x36c4d58d; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x36c4d40d; S=0x36c4cf71; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x36c4d47d; S=0x36c4cfc1; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x36c4d445; S=0x36c4cf99; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x36c4d51d; S=0x36c4d52d; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x36c4d3ed; S=0x36c4d3fd; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x36c4d45d; S=0x36c4d46d; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x36c4d425; S=0x36c4d435; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x36c4d495; S=0x36c4d4a5; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x36c4d4e5; S=0x36c4d4f5; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x36c4d53d; S=0x36c4d54d; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x36c4d3cd; S=0x36c4d3dd; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x36c4d55d; S=0x36c4d56d; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x36c4d4c5; S=0x36c4d4d5; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x36c4d34d; S=0x36c4d35d; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x36c4d4b5; S=0x36c4cfe9; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x36c4d3ad; S=0x36c4d3bd; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x36c4d36d; S=0x36c4d37d; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x36c4d38d; S=0x36c4d39d; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x36c4d32d; S=0x36c4d33d; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x36c4d505; S=0x36c4d009; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x36c4d1f1
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x36c4d031
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x36c4d6f9
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x36c4d59d
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x36c4cbdd
// declared property getter: - (id)build;	// 0x36c4d57d
- (void)dealloc;	// 0x36c4cee5
// declared property getter: - (double)delay;	// 0x36c4d40d
// declared property getter: - (double)direction;	// 0x36c4d47d
// declared property getter: - (double)duration;	// 0x36c4d445
// declared property getter: - (id)groupId;	// 0x36c4d51d
// declared property getter: - (BOOL)hasDelay;	// 0x36c4d3ed
// declared property getter: - (BOOL)hasDirection;	// 0x36c4d45d
// declared property getter: - (BOOL)hasDuration;	// 0x36c4d425
// declared property getter: - (BOOL)hasPartCount;	// 0x36c4d495
// declared property getter: - (BOOL)hasValue;	// 0x36c4d4e5
// declared property getter: - (BOOL)isHead;	// 0x36c4d53d
// declared property getter: - (int)iterateType;	// 0x36c4d3cd
// declared property getter: - (int)level;	// 0x36c4d55d
// declared property getter: - (id)motionPath;	// 0x36c4d4c5
// declared property getter: - (int)nodeType;	// 0x36c4d34d
// declared property getter: - (int)partCount;	// 0x36c4d4b5
// declared property getter: - (int)presetClass;	// 0x36c4d3ad
// declared property getter: - (int)presetId;	// 0x36c4d36d
// declared property getter: - (int)presetSubType;	// 0x36c4d38d
// declared property setter: - (void)setBuild:(id)build;	// 0x36c4d58d
// declared property setter: - (void)setDelay:(double)delay;	// 0x36c4cf71
// declared property setter: - (void)setDirection:(double)direction;	// 0x36c4cfc1
// declared property setter: - (void)setDuration:(double)duration;	// 0x36c4cf99
// declared property setter: - (void)setGroupId:(id)anId;	// 0x36c4d52d
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x36c4d3fd
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x36c4d46d
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x36c4d435
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x36c4d4a5
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x36c4d4f5
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x36c4d54d
// declared property setter: - (void)setIterateType:(int)type;	// 0x36c4d3dd
// declared property setter: - (void)setLevel:(int)level;	// 0x36c4d56d
// declared property setter: - (void)setMotionPath:(id)path;	// 0x36c4d4d5
// declared property setter: - (void)setNodeType:(int)type;	// 0x36c4d35d
// declared property setter: - (void)setPartCount:(int)count;	// 0x36c4cfe9
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x36c4d3bd
// declared property setter: - (void)setPresetId:(int)anId;	// 0x36c4d37d
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x36c4d39d
// declared property setter: - (void)setTargetElement:(id)element;	// 0x36c4d33d
// declared property setter: - (void)setValue:(double)value;	// 0x36c4d009
// declared property getter: - (id)targetElement;	// 0x36c4d32d
// declared property getter: - (double)value;	// 0x36c4d505
@end
