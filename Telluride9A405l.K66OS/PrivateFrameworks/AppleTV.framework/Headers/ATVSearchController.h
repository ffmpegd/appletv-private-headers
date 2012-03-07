/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import "BRMenuController.h"

@class BRTextEntryControl, BRImageControl, NSString, ATVSearchAgent, BRMediatorProvider;

@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
@private
	BRTextEntryControl *_editor;	// 124 = 0x7c
	BRImageControl *_verticalDividerImage;	// 128 = 0x80
	ATVSearchAgent *_agent;	// 132 = 0x84
	BRMediatorProvider *_recentSearchesProvider;	// 136 = 0x88
	NSString *_activeSearchRequest;	// 140 = 0x8c
	NSString *_textEntryHistoryClient;	// 144 = 0x90
	NSString *_textEntryHistoryBehavior;	// 148 = 0x94
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x35d196c1
- (void)_handleContextMenuSelection:(id)selection;	// 0x35d1a9e5
- (void)_performSearchWithString:(id)string;	// 0x35d1a84d
- (void)_recentSearchTermSelected:(id)selected;	// 0x35d1add9
- (void)_searchComplete:(id)complete;	// 0x35d1aaa5
- (BOOL)brEventAction:(id)action;	// 0x35d1a009
- (id)controlToDim;	// 0x35d1a849
- (void)dealloc;	// 0x35d19af9
- (long)defaultIndex;	// 0x35d1a5a9
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x35d19f4d
- (BOOL)isNetworkDependent;	// 0x35d19eb5
- (BOOL)isValidAfterDataUpdate;	// 0x35d19ed9
- (void)layoutSubcontrols;	// 0x35d19bc5
- (id)providersForContextMenu;	// 0x35d1a759
- (id)searchAgent;	// 0x35d19edd
- (void)searchWithString:(id)string;	// 0x35d19eed
- (void)setHeaderTitle:(id)title;	// 0x35d1a531
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x35d19f2d
- (void)setSearchFieldLabel:(id)label;	// 0x35d1a511
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x35d19f6d
- (void)textDidChange:(id)text;	// 0x35d1a605
- (void)textDidEndEditing:(id)text;	// 0x35d1a635
@end

