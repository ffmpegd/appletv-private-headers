/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class NSMutableArray, MRImageProvider, NSDictionary, MRCroppingSprite, MRImage, NSMutableDictionary;

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
	BOOL mIsLoaded;	// 168 = 0xa8
	BOOL mIsVertical;	// 169 = 0xa9
	MRImageProvider *mTextBackground;	// 172 = 0xac
	MRImageProvider *mQuoteOpen;	// 176 = 0xb0
	MRImageProvider *mQuoteClose;	// 180 = 0xb4
	MRImageProvider *mQuoteBox;	// 184 = 0xb8
	MRImageProvider *mWeatherWindowMask;	// 188 = 0xbc
	MRImageProvider *mDateWindowMask;	// 192 = 0xc0
	MRImage *mGrayImage;	// 196 = 0xc4
	MRCroppingSprite *mChapterSprite;	// 200 = 0xc8
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x32205601
+ (BOOL)hasCustomTiming;	// 0x322055fd
+ (void)initialize;	// 0x322046d9
- (id)initWithEffectID:(id)effectID;	// 0x32204785
- (void)_addTextImage:(id)image forKey:(id)key inDictionary:(id)dictionary;	// 0x32210435
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x322070ad
- (void)_calculateDurations:(id)durations slideInformation:(id)information aspectRatio:(float)ratio;	// 0x32206b11
- (double)_calculateMainDurationWithAttributes:(id)attributes;	// 0x322059b1
- (int)_chapterIndexForTime:(double)time;	// 0x32208431
- (NSRange)_chapterRangeForSlide:(int)slide startIndex:(int *)index endIndex:(int *)index3;	// 0x322069d1
- (void)_cleanUpDictionary:(id)dictionary;	// 0x3220fcd9
- (void)_cleanup;	// 0x32204c91
- (int)_currentItemForChapter:(int)chapter atTime:(double)time forDuration:(double *)duration fromTime:(double *)time4;	// 0x32208921
- (void)_drawChapterDateSwitch:(int)aSwitch to:(int)to progress:(float)progress time:(double)time arguments:(id)arguments context:(id)context;	// 0x3220ec01
- (void)_drawGrayChapters:(id)chapters time:(double)time arguments:(id)arguments showInfo:(BOOL)info startProgress:(float)progress titleEnd:(float)end titleToChapter:(float)chapter drawPhotos:(BOOL)photos startIndex:(int)index exit:(float)exit isExiting:(BOOL)exiting chapterIntro:(float)intro chapterProgress:(float)progress13;	// 0x3220b379
- (BOOL)_isMovieForSlideAtIndex:(int)index slideInformation:(id)information;	// 0x32206f4d
- (void)_loadDateForChapter:(int)chapter context:(id)context;	// 0x322111e1
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32211c65
- (void)_loadTextForChapter:(int)chapter context:(id)context;	// 0x32210899
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32212369
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32212341
- (double)_movieDurationForSlideAtIndex:(int)index slideInformation:(id)information;	// 0x32206ffd
- (float)_offsetForChapterIndex:(int)chapterIndex layoutIndex:(int)index aspectRatio:(float)ratio;	// 0x3220828d
- (float)_startTimeForChapter:(int)chapter;	// 0x32208561
- (double)_startTimeForSlideIndex:(int)slideIndex inChapter:(int)chapter;	// 0x32208659
- (id)_textImageForString:(id)string string2:(id)a2 type:(int)type inContext:(id)context firstLine:(CGRect *)line lastLine:(CGRect *)line6;	// 0x3220fe69
- (id)_textImageForString:(id)string type:(int)type inContext:(id)context;	// 0x3220fe39
- (BOOL)_timeIs24HourFormat;	// 0x32211b11
- (void)_unload;	// 0x3221236d
- (void)_unloadTextForChapter:(int)chapter;	// 0x32210735
- (void)_updateIndiciesWithAttributes:(id)attributes;	// 0x32205701
- (void)_updateSlideProviders:(float)providers context:(id)context renderArguments:(id)arguments;	// 0x322062c1
- (id)_weatherStringForCondition:(int)condition;	// 0x32208195
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x3221047d
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x32205e01
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x32205f01
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3220fb45
- (void)endMorphing;	// 0x322105e5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3220fc91
- (BOOL)isLoadedForTime:(double)time;	// 0x32205f19
- (double)lowestDisplayTime;	// 0x32205de9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32207139
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32208c09
- (void)setAttributes:(id)attributes;	// 0x32206225
- (void)setPixelSize:(CGSize)size;	// 0x322052d9
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x32205bd9
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x32205ac9
@end
