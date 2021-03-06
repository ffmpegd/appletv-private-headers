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
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x3592ce8d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x3592d099
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label;	// 0x3592d35d
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer;	// 0x3592d401
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x3592d775
+ (void)_appWillTerminate:(id)_app;	// 0x3592bb8d
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x3592de71
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x3592d8e5
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x3592b32d
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x3592bd21
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x3592c571
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x3592cd45
+ (void)_loadCompletionDB;	// 0x3592b461
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control;	// 0x3592da6d
+ (void)_pruneCompletionDB;	// 0x3592b759
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x3592b989
+ (void)_saveCompletionDB:(id)db;	// 0x3592ba15
+ (void)_saveCompletionDBSoon;	// 0x3592bb11
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3592c551
+ (BOOL)addressBookCompletionEnabled;	// 0x3592b2b5
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x3592c24d
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3592c561
+ (BOOL)autoFillInWebView:(id)webView;	// 0x3592dfe5
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x357c0409
+ (void)clearPreviousDataDatabase;	// 0x3592bc8d
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x3592bc25
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x3592e119
+ (id)currentFormInFrame:(id)frame;	// 0x3592dd95
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x3592de1d
+ (id)domainsWithPreviousData;	// 0x3592bbf1
+ (id)firstFormInFrame:(id)frame;	// 0x3592ddb9
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x3592cc59
+ (BOOL)passwordCompletionEnabled;	// 0x3571f01d
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x3592e0b5
+ (void)preFillInWebFrame:(id)webFrame;	// 0x3571eee9
+ (BOOL)previousDataCompletionEnabled;	// 0x3592b239
+ (BOOL)shouldSaveFormData;	// 0x3592b23d
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x3592b2d9
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x3592e14d
- (void)abortCompletion;	// 0x3592eaa9
- (void)acceptedAutoFillWord:(id)word;	// 0x3592ec55
- (void)autoFillCommand:(id)command;	// 0x3592e4a1
- (void)autoFillWithElementValue;	// 0x3592ec65
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x3592dce1
- (BOOL)currentTextChangeIsProgrammatic;	// 0x3592eaad
- (void)dealloc;	// 0x3592e361
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x3592e58d
- (BOOL)hasCurrentSuggestions;	// 0x3592ec0d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x3592ea8d
- (id)queryString;	// 0x3592dc31
- (void)reflectFinalSelectedListItem:(id)item;	// 0x3592e801
- (void)reflectSelectedListItem:(id)item;	// 0x3592e72d
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x3592ea85
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x3592e9f5
- (BOOL)returnPerformsActionWhenShowingList;	// 0x3592ea91
- (id)selectedListItem:(id)item;	// 0x3592e481
- (BOOL)shouldSuppressAutocomplete;	// 0x3592e5cd
- (BOOL)showsListForSingleListItem;	// 0x3592ea95
- (void)sourceFieldTextDidChange;	// 0x3592e421
- (void)sourceFieldTextDidEndEditing;	// 0x3592ea99
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x3592eab1
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x3592dc51
- (id)webFrame;	// 0x3592e3e9
@end

