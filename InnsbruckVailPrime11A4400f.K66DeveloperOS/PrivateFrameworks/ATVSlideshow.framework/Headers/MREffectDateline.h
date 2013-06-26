/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"
#import "MZEffectTiming.h"

@class MRImageProvider, MRCroppingSprite, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray, MRImage;

@interface MREffectDateline : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSDictionary *mJournal;	// 120 = 0x78
	NSMutableArray *mLengths;	// 124 = 0x7c
	NSMutableArray *mChapterDurations;	// 128 = 0x80
	NSMutableArray *mChapters;	// 132 = 0x84
	NSMutableDictionary *mText;	// 136 = 0x88
	NSMutableDictionary *mChapterDates;	// 140 = 0x8c
	NSMutableDictionary *mChapterNumDate;	// 144 = 0x90
	NSMutableArray *mIndicies;	// 148 = 0x94
	NSMutableDictionary *mWeatherImages;	// 152 = 0x98
	NSMutableDictionary *mDayImages;	// 156 = 0x9c
	NSMutableDictionary *mBreakInformation;	// 160 = 0xa0
	NSMutableDictionary *mMovieProviders;	// 164 = 0xa4
	NSArray *mSlideInformation;	// 168 = 0xa8
	BOOL mIsLoaded;	// 172 = 0xac
	BOOL mIsRotating;	// 173 = 0xad
	BOOL mIsVertical;	// 174 = 0xae
	MRImageProvider *mTextBackground;	// 176 = 0xb0
	MRImageProvider *mQuoteOpen;	// 180 = 0xb4
	MRImageProvider *mQuoteClose;	// 184 = 0xb8
	MRImageProvider *mQuoteBox;	// 188 = 0xbc
	MRImageProvider *mWeatherWindowMask;	// 192 = 0xc0
	MRImageProvider *mDateWindowMask;	// 196 = 0xc4
	MRImage *mGrayImage;	// 200 = 0xc8
	MRCroppingSprite *mChapterSprite;	// 204 = 0xcc
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x2fd4b699
+ (BOOL)hasCustomTiming;	// 0x2fd4b695
+ (void)initialize;	// 0x2fd4a709
- (id)initWithEffectID:(id)effectID;	// 0x2fd4a7b5
- (void)_addTextImage:(id)image forKey:(id)key inDictionary:(id)dictionary;	// 0x2fd58b65
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x2fd4d77d
- (void)_calculateDurations:(id)durations slideInformation:(id)information aspectRatio:(float)ratio;	// 0x2fd4d1ed
- (double)_calculateMainDurationWithAttributes:(id)attributes;	// 0x2fd4ba69
- (int)_chapterIndexForTime:(double)time;	// 0x2fd4f661
- (NSRange)_chapterRangeForSlide:(int)slide startIndex:(int *)index endIndex:(int *)index3;	// 0x2fd4d0ad
- (void)_cleanUpDictionary:(id)dictionary;	// 0x2fd58305
- (void)_cleanup;	// 0x2fd4ace9
- (int)_currentItemForChapter:(int)chapter atTime:(double)time forDuration:(double *)duration fromTime:(double *)time4;	// 0x2fd4fb59
- (void)_drawChapterDateSwitch:(int)aSwitch to:(int)to progress:(float)progress time:(double)time arguments:(id)arguments context:(id)context;	// 0x2fd571a9
- (void)_drawGrayChapters:(id)chapters time:(double)time arguments:(id)arguments showInfo:(BOOL)info startProgress:(float)progress titleEnd:(float)end titleToChapter:(float)chapter drawPhotos:(BOOL)photos startIndex:(int)index exit:(float)exit isExiting:(BOOL)exiting chapterIntro:(float)intro chapterProgress:(float)progress13;	// 0x2fd52f09
- (BOOL)_isMovieForSlideAtIndex:(int)index;	// 0x2fd4d63d
- (void)_loadDateForChapter:(int)chapter context:(id)context;	// 0x2fd59a81
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd5a4fd
- (void)_loadTextForChapter:(int)chapter context:(id)context;	// 0x2fd59121
- (int)_maxLinesForTextElement:(id)textElement;	// 0x2fd5abcd
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x2fd5abb1
- (double)_movieDurationForSlideAtIndex:(int)index;	// 0x2fd4d6dd
- (float)_offsetForChapterIndex:(int)chapterIndex layoutIndex:(int)index aspectRatio:(float)ratio;	// 0x2fd4f4ad
- (CGSize)_sizeForBreakAspectRatio:(float)breakAspectRatio size:(CGSize)size inContext:(id)context;	// 0x2fd4cf31
- (float)_startTimeForChapter:(int)chapter;	// 0x2fd4f789
- (double)_startTimeForSlideIndex:(int)slideIndex inChapter:(int)chapter;	// 0x2fd4f881
- (id)_textImageForString:(id)string string2:(id)a2 type:(int)type inContext:(id)context firstLine:(CGRect *)line lastLine:(CGRect *)line6;	// 0x2fd58495
- (id)_textImageForString:(id)string type:(int)type inContext:(id)context;	// 0x2fd58465
- (BOOL)_timeIs24HourFormat;	// 0x2fd5a3a9
- (void)_unload;	// 0x2fd5abd1
- (void)_unloadTextForChapter:(int)chapter;	// 0x2fd58fbd
- (void)_updateIndiciesWithAttributes:(id)attributes;	// 0x2fd4b799
- (void)_updateSlideProviders:(float)providers context:(id)context renderArguments:(id)arguments;	// 0x2fd4c479
- (id)_weatherStringForCondition:(unsigned)condition;	// 0x2fd4f3b5
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x2fd58bad
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x2fd4beb9
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x2fd4c0b1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fd58171
- (void)endMorphing;	// 0x2fd58dbd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fd582bd
- (BOOL)isLoadedForTime:(double)time;	// 0x2fd4c0c9
- (double)lowestDisplayTime;	// 0x2fd4bea1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd4d851
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fd4fe41
- (void)setAttributes:(id)attributes;	// 0x2fd4c3dd
- (void)setPixelSize:(CGSize)size;	// 0x2fd4b349
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x2fd4bc91
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x2fd4bb81
@end
