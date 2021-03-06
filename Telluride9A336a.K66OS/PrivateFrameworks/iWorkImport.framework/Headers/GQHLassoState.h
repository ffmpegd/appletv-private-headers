/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState : GQHState {
@private
	GQHXML *mNavigation;	// 108 = 0x6c
	int mSheetCount;	// 112 = 0x70
	int mTableCount;	// 116 = 0x74
	CFStringRef mCssUri;	// 120 = 0x78
	CFStringRef mCurrentSheetFilename;	// 124 = 0x7c
	CFStringRef mCurrentSheetUri;	// 128 = 0x80
	CGPoint mMaxCanvasPoint;	// 132 = 0x84
	unsigned mCurrentDrawableZOrder;	// 140 = 0x8c
	unsigned mZOrderedDrawableCount;	// 144 = 0x90
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;	// 148 = 0x94
	CFArrayRef mSheetCssUriList;	// 152 = 0x98
	CFStringRef mSheetCssFilename;	// 156 = 0x9c
	CFStringRef mSheetOneCss;	// 160 = 0xa0
	CFStringRef mSheetOneLastCSS;	// 164 = 0xa4
	char *mFirstWorkspaceName;	// 168 = 0xa8
	bool mIsProgressiveMode;	// 172 = 0xac
}
- (id)initWithState:(id)state;	// 0x304a5a21
- (void)addCachedStyle:(CFStringRef)style;	// 0x304a6459
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x304a6561
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x304a59a9
- (void)beginNewSheet:(const char *)sheet processorState:(id)state;	// 0x304a69e1
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x304a6335
- (unsigned)currentDrawableZOrder;	// 0x304a59f9
- (void)dealloc;	// 0x304a7041
- (BOOL)drawablesNeedCssZOrdering;	// 0x304a59f5
- (int)endSheet;	// 0x304a65e5
- (BOOL)finishMainHtml;	// 0x304a63a1
- (BOOL)inProgressiveMode;	// 0x304a5a11
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x304a6499
- (CGPoint)maxCanvasPoint;	// 0x304a5991
- (void)writeAnchorInNavigationPage:(char *)navigationPage;	// 0x304a6795
- (void)writeIndexPageWithDocumentSize:(CGSize)documentSize;	// 0x304a5f69
- (void)writeNavigationPage:(id)page;	// 0x304a5b6d
@end

