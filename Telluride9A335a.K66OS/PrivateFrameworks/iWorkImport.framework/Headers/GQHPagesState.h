/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQWrapPointGenerator.h"
#import "GQHState.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
@private
	CFDictionaryRef mFloatingDrawables;	// 108 = 0x6c
	int mMode;	// 112 = 0x70
	CFDictionaryRef mHeaders;	// 116 = 0x74
	CFDictionaryRef mFooters;	// 120 = 0x78
	CFArrayRef mSectionStyles;	// 124 = 0x7c
	CFDictionaryRef mPageWrapPointsMap;	// 128 = 0x80
	int mCurrentPageIndex;	// 132 = 0x84
	int mStartPageAt;	// 136 = 0x88
	int mStartPageAtValueChangedAtPageIndex;	// 140 = 0x8c
	GQHStyle *mCurrentLayoutStyle;	// 144 = 0x90
	GQHStyle *mCurrentParagraphStyle;	// 148 = 0x94
	GQDSStyle *mCurrentBaseParagraphStyle;	// 152 = 0x98
	CFStringRef mCurrentCachedParagraphClass;	// 156 = 0x9c
	GQHStyle *mCurrentSpanStyle;	// 160 = 0xa0
	GQDSStyle *mCurrentBaseSpanStyle;	// 164 = 0xa4
	CFStringRef mCurrentCachedSpanClass;	// 168 = 0xa8
	GQWrapPointSet *mCurrentWrapPointSet;	// 172 = 0xac
	CGRect mLastFrame;	// 176 = 0xb0
	BOOL mMappingFloatingDrawables;	// 192 = 0xc0
	BOOL mStartedPage;	// 193 = 0xc1
	BOOL mStartedSection;	// 194 = 0xc2
	BOOL mDidInsertPageHeader;	// 195 = 0xc3
	BOOL mDidFindContainerHint;	// 196 = 0xc4
	GQDWPContainerHint *mLastInsertedContainerHint;	// 200 = 0xc8
	CFArrayRef mAttachmentPositions;	// 204 = 0xcc
	long mAttachmentIdCounter;	// 208 = 0xd0
	long mFirstAttachmentId;	// 212 = 0xd4
	BOOL mSplitNextAttachment;	// 216 = 0xd8
	GQDSStyle *mCurrentSectionStyle;	// 220 = 0xdc
	BOOL mHasLayoutDrawables;	// 224 = 0xe0
	int mCurrentHintPageIndex;	// 228 = 0xe4
	int mCurrentHintColumnIndex;	// 232 = 0xe8
	BOOL mIsMappingHeadersFooters;	// 236 = 0xec
	int mHeaderFooterPageNumber;	// 240 = 0xf0
	CFDictionaryRef mDrawablePagesOrderToCssZOrderClassMap;	// 244 = 0xf4
	CGSize mPageSize;	// 248 = 0xf8
	CFArrayRef mTocHrefStack;	// 256 = 0x100
	BOOL mCurrentFrameHasSandbagFloats;	// 260 = 0x104
	int mProgressiveIndex;	// 264 = 0x108
}
@property(assign) int currentPageIndex;	// G=0x3048dd51; S=0x3048dd61; converted property
@property(assign) BOOL hasLayoutDrawables;	// G=0x3048ddf5; S=0x3048dde5; converted property
@property(assign) BOOL isMappingHeadersFooters;	// G=0x3048de15; S=0x3048de05; converted property
@property(assign) int mode;	// G=0x3048dd31; S=0x3048dd41; converted property
@property(assign) CGSize pageSize;	// G=0x3048dec5; S=0x3048dedd; converted property
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x3048df09
- (void)addAttachmentPosition:(double)position;	// 0x3048f471
- (void)addFloatingDrawable:(id)drawable;	// 0x3048fdcd
- (void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;	// 0x3048f9c5
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x3048e2e5
- (void)addWrapPoint:(id)point;	// 0x3048e851
- (BOOL)allowInlineWrap;	// 0x3048def1
- (void)beginWrapPointSet;	// 0x3048e9a9
- (void)clearFloatingDrawables;	// 0x3048fd19
- (void)clearWrapPoints;	// 0x3048dde1
- (void)closeStateLayoutElementsAndStyles;	// 0x304903d9
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x3048e5d5
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x3048e2b1
- (CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;	// 0x3048e21d
- (long)currentAttachmentId;	// 0x3048dda9
- (double)currentAttachmentPosition;	// 0x3048f425
// converted property getter: - (int)currentPageIndex;	// 0x3048dd51
- (void)dealloc;	// 0x3048fead
- (id)drawableAtIndex:(int)index;	// 0x3048fd99
- (void)endSection;	// 0x3048e059
- (void)endWrapPointSet;	// 0x3048e915
- (void)finishedWithSplitAttachment;	// 0x3048f4b5
- (long)firstAttachmentId;	// 0x3048ddd1
- (int)floatingDrawablesCount;	// 0x3048fe7d
- (id)footerForName:(CFStringRef)name;	// 0x3048fbc1
- (void)handleContainerHint:(id)hint;	// 0x3048edbd
// converted property getter: - (BOOL)hasLayoutDrawables;	// 0x3048ddf5
- (id)headerForName:(CFStringRef)name;	// 0x3048fc91
- (void)inContent;	// 0x3048e349
- (void)insertAttachmentPlaceholder;	// 0x3048f33d
// converted property getter: - (BOOL)isMappingHeadersFooters;	// 0x3048de15
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;	// 0x3048f4e1
// converted property getter: - (int)mode;	// 0x3048dd31
- (double)moveToNextAttachmentPosition;	// 0x3048f3e9
- (BOOL)needAbsolutelyPositionedTables;	// 0x3048e039
- (long)nextAttachmentId;	// 0x3048ddb9
- (void)openStateLayoutElementsAndStyles;	// 0x304905f9
- (void)overrideSectionStyle:(id)style;	// 0x3048f8a1
- (CFArrayRef)pageDrawables:(int)drawables;	// 0x3048fcb5
- (int)pageNumberForHeaderOrFooter;	// 0x3048de25
// converted property getter: - (CGSize)pageSize;	// 0x3048dec5
- (CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;	// 0x3048deb5
- (void)popTocHref;	// 0x3048e181
- (void)pushTocHref:(CFStringRef)href;	// 0x3048e1b5
- (XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;	// 0x3048f8d1
- (void)resolveHeaderName:(const CFStringRef *)name footerName:(const CFStringRef *)name2;	// 0x3048e9ed
- (id)sectionStyleForPageIndex:(int)pageIndex;	// 0x3048f93d
- (id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;	// 0x30490899
- (void)setCurrentLayoutStyle:(id)style;	// 0x3048f84d
// converted property setter: - (void)setCurrentPageIndex:(int)index;	// 0x3048dd61
- (void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x3048f755
- (void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;	// 0x3048f65d
- (void)setDidFindContainerHint:(BOOL)findContainerHint;	// 0x3048dd81
- (void)setDidInsertPageHeader:(BOOL)insertPageHeader;	// 0x3048dd71
- (void)setFooters:(CFArrayRef)footers;	// 0x3048fb15
// converted property setter: - (void)setHasLayoutDrawables:(BOOL)drawables;	// 0x3048dde5
- (void)setHeaders:(CFArrayRef)headers;	// 0x3048fbe5
// converted property setter: - (void)setIsMappingHeadersFooters:(BOOL)footers;	// 0x3048de05
// converted property setter: - (void)setMode:(int)mode;	// 0x3048dd41
- (void)setOutlineLevel:(int)level;	// 0x3048de6d
- (void)setOutlineStyleType:(int)type;	// 0x3048de91
// converted property setter: - (void)setPageSize:(CGSize)size;	// 0x3048dedd
- (bool)splitNextAttachment;	// 0x3048dd91
- (void)startLayout;	// 0x304901d9
- (void)startSection;	// 0x304900f1
- (unsigned)tocDepth;	// 0x3048e1fd
- (BOOL)useOutline;	// 0x3048de55
- (id)wrapPointSetForPage:(int)page;	// 0x30490595
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;	// 0x3048e819
@end

