/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"
#import "OfficeImport-Structs.h"

@class OADTextListStyle, NSMutableArray, NSMutableDictionary;

@interface PDPresentation : OCDDocument {
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
@property(assign) BOOL isAutoPlay;	// G=0x34a88089; S=0x34806d85; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x34a88099; S=0x3481a019; converted property
@property(assign) BOOL isKiosk;	// G=0x34a880b9; S=0x349ad201; converted property
@property(assign) BOOL isLooping;	// G=0x34a880a9; S=0x349371d1; converted property
@property(assign) CGSize notesSize;	// G=0x34a88071; S=0x3481a005; converted property
@property(assign) CGSize slideSize;	// G=0x34874471; S=0x34819ff1; converted property
- (id)init;	// 0x34805745
- (id).cxx_construct;	// 0x34805741
- (unsigned long)addBulletBlip:(id)blip;	// 0x349b15dd
- (void)addNotesMaster:(id)master;	// 0x3495ce3d
- (void)addSlide:(id)slide;	// 0x34a87fe1
- (void)addSlideMaster:(id)master;	// 0x3481fb11
- (id)bulletBlipAtIndex:(long)index;	// 0x34a88051
- (unsigned long)bulletBlipCount;	// 0x349b1619
- (id)bulletBlips;	// 0x34936f9d
- (id)commentAuthorForId:(unsigned)anId;	// 0x34a880c9
- (void)dealloc;	// 0x3488c161
- (id)defaultTextStyle;	// 0x34815cbd
- (void)flushUnusedMastersAndLayouts;	// 0x34a88111
- (unsigned)indexOfSlide:(id)slide;	// 0x34a88001
// converted property getter: - (BOOL)isAutoPlay;	// 0x34a88089
// converted property getter: - (BOOL)isCommentsVisible;	// 0x34a88099
// converted property getter: - (BOOL)isKiosk;	// 0x34a880b9
// converted property getter: - (BOOL)isLooping;	// 0x34a880a9
- (id)notesMasterAtIndex:(unsigned)index;	// 0x34a87f81
- (unsigned)notesMasterCount;	// 0x34a87f61
// converted property getter: - (CGSize)notesSize;	// 0x34a88071
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x349b3079
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x34806d85
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x3481a019
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x349ad201
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x349371d1
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x3481a005
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x34819ff1
- (id)slideAtIndex:(unsigned)index;	// 0x34a87fc1
- (unsigned)slideCount;	// 0x34a87fa1
- (id)slideMasterAtIndex:(unsigned)index;	// 0x34a87f41
- (unsigned)slideMasterCount;	// 0x34a87f21
// converted property getter: - (CGSize)slideSize;	// 0x34874471
@end
