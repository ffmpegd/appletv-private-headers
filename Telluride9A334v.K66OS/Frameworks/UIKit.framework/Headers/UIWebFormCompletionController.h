/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class DOMHTMLInputElement, DOMElement, NSString, NSMutableDictionary;

@interface UIWebFormCompletionController : NSObject {
	DOMHTMLInputElement *_element;	// 4 = 0x4
	NSString *_fieldName;	// 8 = 0x8
	DOMElement *_form;	// 12 = 0xc
	BOOL _isLoginForm;	// 16 = 0x10
	NSMutableDictionary *_items;	// 20 = 0x14
}
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x302e2e8d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x302e3099
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label;	// 0x302e335d
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer;	// 0x302e3401
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x302e3775
+ (void)_appWillTerminate:(id)_app;	// 0x302e1b8d
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x302e3e71
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x302e38e5
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x302e132d
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x302e1d21
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x302e2571
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x302e2d45
+ (void)_loadCompletionDB;	// 0x302e1461
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control;	// 0x302e3a6d
+ (void)_pruneCompletionDB;	// 0x302e1759
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x302e1989
+ (void)_saveCompletionDB:(id)db;	// 0x302e1a15
+ (void)_saveCompletionDBSoon;	// 0x302e1b11
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x302e2551
+ (BOOL)addressBookCompletionEnabled;	// 0x302e12b5
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x302e224d
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x302e2561
+ (BOOL)autoFillInWebView:(id)webView;	// 0x302e3fe5
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x30176409
+ (void)clearPreviousDataDatabase;	// 0x302e1c8d
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x302e1c25
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x302e4119
+ (id)currentFormInFrame:(id)frame;	// 0x302e3d95
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x302e3e1d
+ (id)domainsWithPreviousData;	// 0x302e1bf1
+ (id)firstFormInFrame:(id)frame;	// 0x302e3db9
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x302e2c59
+ (BOOL)passwordCompletionEnabled;	// 0x300d501d
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x302e40b5
+ (void)preFillInWebFrame:(id)webFrame;	// 0x300d4ee9
+ (BOOL)previousDataCompletionEnabled;	// 0x302e1239
+ (BOOL)shouldSaveFormData;	// 0x302e123d
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x302e12d9
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x302e414d
- (void)abortCompletion;	// 0x302e4aa9
- (void)acceptedAutoFillWord:(id)word;	// 0x302e4c55
- (void)autoFillCommand:(id)command;	// 0x302e44a1
- (void)autoFillWithElementValue;	// 0x302e4c65
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x302e3ce1
- (BOOL)currentTextChangeIsProgrammatic;	// 0x302e4aad
- (void)dealloc;	// 0x302e4361
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x302e458d
- (BOOL)hasCurrentSuggestions;	// 0x302e4c0d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x302e4a8d
- (id)queryString;	// 0x302e3c31
- (void)reflectFinalSelectedListItem:(id)item;	// 0x302e4801
- (void)reflectSelectedListItem:(id)item;	// 0x302e472d
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x302e4a85
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x302e49f5
- (BOOL)returnPerformsActionWhenShowingList;	// 0x302e4a91
- (id)selectedListItem:(id)item;	// 0x302e4481
- (BOOL)shouldSuppressAutocomplete;	// 0x302e45cd
- (BOOL)showsListForSingleListItem;	// 0x302e4a95
- (void)sourceFieldTextDidChange;	// 0x302e4421
- (void)sourceFieldTextDidEndEditing;	// 0x302e4a99
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x302e4ab1
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x302e3c51
- (id)webFrame;	// 0x302e43e9
@end
