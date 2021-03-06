/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRMenuController.h"

@class BRTextEntryControl, BRControl, BRImageControl, NSString, ATVSearchAgent, BRMediatorProvider, NSArray;

__attribute__((visibility("hidden")))
@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRImageControl *_verticalDividerImage;	// 148 = 0x94
	ATVSearchAgent *_agent;	// 152 = 0x98
	BRMediatorProvider *_recentSearchesProvider;	// 156 = 0x9c
	NSString *_activeSearchRequest;	// 160 = 0xa0
	NSString *_textEntryHistoryClient;	// 164 = 0xa4
	NSString *_textEntryHistoryBehavior;	// 168 = 0xa8
	BRControl *_alertControl;	// 172 = 0xac
	NSArray *_resultsProviderPresentationOrder;	// 176 = 0xb0
}
@property(retain, nonatomic) BRControl *alertControl;	// G=0x239dfd; S=0x239e0d; @synthesize=_alertControl
@property(copy, nonatomic) NSArray *resultsProviderPresentationOrder;	// G=0x239e1d; S=0x239db1; @synthesize=_resultsProviderPresentationOrder
- (id)initWithSearchAgent:(id)searchAgent;	// 0x238b89
- (void)_handleContextMenuSelection:(id)selection;	// 0x23a28d
- (void)_networkStateChanged;	// 0x239e31
- (void)_performSearchWithString:(id)string;	// 0x23a0fd
- (void)_recentSearchTermSelected:(id)selected;	// 0x23a9d5
- (void)_searchComplete:(id)complete;	// 0x23a41d
- (BOOL)_shouldSetFocusToListForEvent:(id)event;	// 0x23a349
// declared property getter: - (id)alertControl;	// 0x239dfd
- (BOOL)brEventAction:(id)action;	// 0x23956d
- (id)controlToDim;	// 0x239dad
- (void)dealloc;	// 0x238ff9
- (long)defaultIndex;	// 0x239b05
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2394b9
- (BOOL)isNetworkDependent;	// 0x239421
- (BOOL)isValidAfterDataUpdate;	// 0x239445
- (void)layoutSubcontrols;	// 0x2390d9
- (id)providersForContextMenu;	// 0x239cbd
// declared property getter: - (id)resultsProviderPresentationOrder;	// 0x239e1d
- (id)searchAgent;	// 0x239449
- (void)searchWithString:(id)string;	// 0x239459
// declared property setter: - (void)setAlertControl:(id)control;	// 0x239e0d
- (void)setHeaderTitle:(id)title;	// 0x239a8d
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x239499
// declared property setter: - (void)setResultsProviderPresentationOrder:(id)order;	// 0x239db1
- (void)setSearchFieldLabel:(id)label;	// 0x239a6d
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x2394d9
- (void)textDidChange:(id)text;	// 0x239b61
- (void)textDidEndEditing:(id)text;	// 0x239b91
@end

