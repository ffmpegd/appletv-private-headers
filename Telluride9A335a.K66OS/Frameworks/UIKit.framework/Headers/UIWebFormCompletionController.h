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
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x33c33e8d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x33c34099
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label;	// 0x33c3435d
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer;	// 0x33c34401
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x33c34775
+ (void)_appWillTerminate:(id)_app;	// 0x33c32b8d
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x33c34e71
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x33c348e5
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x33c3232d
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x33c32d21
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x33c33571
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x33c33d45
+ (void)_loadCompletionDB;	// 0x33c32461
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control;	// 0x33c34a6d
+ (void)_pruneCompletionDB;	// 0x33c32759
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x33c32989
+ (void)_saveCompletionDB:(id)db;	// 0x33c32a15
+ (void)_saveCompletionDBSoon;	// 0x33c32b11
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x33c33551
+ (BOOL)addressBookCompletionEnabled;	// 0x33c322b5
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x33c3324d
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x33c33561
+ (BOOL)autoFillInWebView:(id)webView;	// 0x33c34fe5
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x33ac7409
+ (void)clearPreviousDataDatabase;	// 0x33c32c8d
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x33c32c25
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x33c35119
+ (id)currentFormInFrame:(id)frame;	// 0x33c34d95
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x33c34e1d
+ (id)domainsWithPreviousData;	// 0x33c32bf1
+ (id)firstFormInFrame:(id)frame;	// 0x33c34db9
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x33c33c59
+ (BOOL)passwordCompletionEnabled;	// 0x33a2601d
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x33c350b5
+ (void)preFillInWebFrame:(id)webFrame;	// 0x33a25ee9
+ (BOOL)previousDataCompletionEnabled;	// 0x33c32239
+ (BOOL)shouldSaveFormData;	// 0x33c3223d
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x33c322d9
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x33c3514d
- (void)abortCompletion;	// 0x33c35aa9
- (void)acceptedAutoFillWord:(id)word;	// 0x33c35c55
- (void)autoFillCommand:(id)command;	// 0x33c354a1
- (void)autoFillWithElementValue;	// 0x33c35c65
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x33c34ce1
- (BOOL)currentTextChangeIsProgrammatic;	// 0x33c35aad
- (void)dealloc;	// 0x33c35361
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x33c3558d
- (BOOL)hasCurrentSuggestions;	// 0x33c35c0d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x33c35a8d
- (id)queryString;	// 0x33c34c31
- (void)reflectFinalSelectedListItem:(id)item;	// 0x33c35801
- (void)reflectSelectedListItem:(id)item;	// 0x33c3572d
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x33c35a85
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x33c359f5
- (BOOL)returnPerformsActionWhenShowingList;	// 0x33c35a91
- (id)selectedListItem:(id)item;	// 0x33c35481
- (BOOL)shouldSuppressAutocomplete;	// 0x33c355cd
- (BOOL)showsListForSingleListItem;	// 0x33c35a95
- (void)sourceFieldTextDidChange;	// 0x33c35421
- (void)sourceFieldTextDidEndEditing;	// 0x33c35a99
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x33c35ab1
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x33c34c51
- (id)webFrame;	// 0x33c353e9
@end

