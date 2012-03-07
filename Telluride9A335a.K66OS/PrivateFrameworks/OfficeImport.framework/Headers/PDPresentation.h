/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, OADTextListStyle, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument {
@private
	NSMutableArray *mSlideMasters;	// 20 = 0x14
	NSMutableArray *mNotesMasters;	// 24 = 0x18
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mBulletBlips;	// 32 = 0x20
	CGSize mSlideSize;	// 36 = 0x24
	CGSize mNotesSize;	// 44 = 0x2c
	BOOL mIsAutoPlay;	// 52 = 0x34
	BOOL mIsCommentsVisible;	// 53 = 0x35
	BOOL mIsLooping;	// 54 = 0x36
	BOOL mIsKiosk;	// 55 = 0x37
	NSMutableDictionary *mCommentAuthors;	// 56 = 0x38
	OADTextListStyle *mDefaultTextStyle;	// 60 = 0x3c
}
@property(assign) BOOL isAutoPlay;	// G=0x3533f89d; S=0x351d1a81; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x3533f8ad; S=0x351e3271; converted property
@property(assign) BOOL isKiosk;	// G=0x3533f8cd; S=0x352e4a85; converted property
@property(assign) BOOL isLooping;	// G=0x3533f8bd; S=0x352e4a75; converted property
@property(assign) CGSize notesSize;	// G=0x3533f885; S=0x351e325d; converted property
@property(assign) CGSize slideSize;	// G=0x3512ea39; S=0x351e3249; converted property
- (id)init;	// 0x351d0a1d
- (unsigned long)addBulletBlip:(id)blip;	// 0x352a28d5
- (void)addNotesMaster:(id)master;	// 0x352eb719
- (void)addSlide:(id)slide;	// 0x3533fc0d
- (void)addSlideMaster:(id)master;	// 0x351e570d
- (id)bulletBlipAtIndex:(long)index;	// 0x3533fb99
- (unsigned long)bulletBlipCount;	// 0x352a2911
- (id)bulletBlips;	// 0x352d0dc5
- (id)commentAuthorForId:(unsigned)anId;	// 0x3533fb49
- (void)dealloc;	// 0x351b528d
- (id)defaultTextStyle;	// 0x351e0711
- (void)flushUnusedMastersAndLayouts;	// 0x3533f8dd
- (unsigned)indexOfSlide:(id)slide;	// 0x3533fbbd
// converted property getter: - (BOOL)isAutoPlay;	// 0x3533f89d
// converted property getter: - (BOOL)isCommentsVisible;	// 0x3533f8ad
// converted property getter: - (BOOL)isKiosk;	// 0x3533f8cd
// converted property getter: - (BOOL)isLooping;	// 0x3533f8bd
- (id)notesMasterAtIndex:(unsigned)index;	// 0x3533fc75
- (unsigned)notesMasterCount;	// 0x3533fc99
// converted property getter: - (CGSize)notesSize;	// 0x3533f885
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x352fb5a1
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x351d1a81
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x351e3271
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x352e4a85
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x352e4a75
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x351e325d
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x351e3249
- (id)slideAtIndex:(unsigned)index;	// 0x3533fc31
- (unsigned)slideCount;	// 0x3533fc55
- (id)slideMasterAtIndex:(unsigned)index;	// 0x3533fcb9
- (unsigned)slideMasterCount;	// 0x3533fcdd
// converted property getter: - (CGSize)slideSize;	// 0x3512ea39
@end
