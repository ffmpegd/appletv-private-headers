/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "WebFormDelegate.h"
#import <ImageIO/NSObject.h>

@class UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
	UIWebBrowserView *_webBrowserView;	// 4 = 0x4
	_UIWebFormDelegateEditedFormsMap *_editedForms;	// 8 = 0x8
}
- (id)initWithWebBrowserView:(id)webBrowserView;	// 0x2f71a0cd
- (void)_clearEditedFormsInFrame:(id)frame;	// 0x2f48bc91
- (void)_didEditFormElement:(id)element inFrame:(id)frame;	// 0x2f71a319
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;	// 0x2f71a499
- (void)acceptedAutoFillWord:(id)word;	// 0x2f71a2d9
- (void)dataSourceHasChangedForFrame:(id)frame;	// 0x2f48bc81
- (void)dealloc;	// 0x2f719d4d
- (void)didFocusTextField:(id)field inFrame:(id)frame;	// 0x2f719fe5
- (BOOL)formWasEdited;	// 0x2f48bce9
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x2f719d99
- (BOOL)hasCurrentSuggestions;	// 0x2f71a2a1
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x2f71a145
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x2f719e99
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x2f719ed9
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x2f719fe1
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x2f719f19
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x2f719f7d
- (void)willSendSubmitEventToForm:(id)form inFrame:(id)frame withValues:(id)values;	// 0x2f71a031
@end

