/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, DOMHTMLInputElement, DOMElement, NSMutableDictionary;

@interface UIWebFormCompletionController : NSObject {
	DOMHTMLInputElement *_element;	// 4 = 0x4
	NSString *_fieldName;	// 8 = 0x8
	DOMElement *_form;	// 12 = 0xc
	BOOL _isLoginForm;	// 16 = 0x10
	NSMutableDictionary *_items;	// 20 = 0x14
}
+ (id)_abMultiValuesForPerson:(void *)person property:(id)property property:(int)property3 key:(id)key label:(id)label;	// 0x32dada4d
+ (id)_abValuesForPerson:(void *)person property:(id)property propertyID:(int)anId key:(id)key label:(id)label;	// 0x32dadc95
+ (id)_abValuesForProperty:(id)property key:(id)key label:(id)label forPerson:(void *)person;	// 0x32dade05
+ (void)_addABMatchesToArray:(id)array forString:(id)string atABPointer:(id)abpointer forPerson:(void *)person;	// 0x32dade91
+ (void)_addPreviousDataMatchesToArray:(id)array forString:(id)string frame:(id)frame fieldName:(id)name;	// 0x32dae209
+ (void)_appWillTerminate:(id)_app;	// 0x32dac6fd
+ (BOOL)_autoFillPasswordInFrame:(id)frame autoFiller:(id)filler;	// 0x32daeaf1
+ (id)_credentialMatchesForString:(id)string frame:(id)frame;	// 0x32dae36d
+ (id)_cryptData:(id)data encode:(BOOL)encode;	// 0x32dabe55
+ (BOOL)_frame:(id)frame sourceFrame:(id)frame2 willSubmitLoginForm:(id)form withValues:(id)values autoFiller:(id)filler submissionListener:(id)listener;	// 0x32dac8a9
+ (void)_frame:(id)frame sourceFrame:(id)frame2 willSubmitRegularForm:(id)form withValues:(id)values;	// 0x32dad0e9
+ (unsigned)_indexOfMarkerInMatches:(id)matches matchingABMatch:(id)match;	// 0x32dad8fd
+ (void)_loadCompletionDB;	// 0x32dabf8d
+ (id)_matchesForString:(id)string frame:(id)frame fieldName:(id)name control:(id)control forPerson:(void *)person;	// 0x32dae4fd
+ (void)_pruneCompletionDB;	// 0x32dac2ad
+ (void)_reapABMarker:(id)marker forFrame:(id)frame fieldName:(id)name;	// 0x32dac4e9
+ (void)_saveCompletionDB:(id)db;	// 0x32dac57d
+ (void)_saveCompletionDBSoon;	// 0x32dac681
+ (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x32dad0c9
+ (BOOL)addressBookCompletionEnabled;	// 0x32dabddd
+ (void)alertPrompt:(id)prompt clickedButtonAtIndex:(int)index;	// 0x32dacdb9
+ (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x32dad0d9
+ (void)autoFillInWebView:(id)webView;	// 0x32daec55
+ (void)clearAutoFillStateForFrame:(id)frame;	// 0x32b9c6d9
+ (void)clearPreviousDataDatabase;	// 0x32dac809
+ (void)clearPreviousDataForDomain:(id)domain;	// 0x32dac7a1
+ (BOOL)credentialIsNeverSaveMarker:(id)marker;	// 0x32daed65
+ (id)currentFormInFrame:(id)frame;	// 0x32daea11
+ (id)currentOrFirstFrameAndForm:(id *)form inWebView:(id)webView;	// 0x32daea9d
+ (id)domainsWithPreviousData;	// 0x32dac76d
+ (id)firstFormInFrame:(id)frame;	// 0x32daea39
+ (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x32dad809
+ (BOOL)passwordCompletionEnabled;	// 0x32b9f15d
+ (id)preFillForm:(id)form inFrame:(id)frame;	// 0x32daed01
+ (void)preFillInWebFrame:(id)webFrame;	// 0x32b9f035
+ (BOOL)previousDataCompletionEnabled;	// 0x32dabd61
+ (BOOL)shouldSaveFormData;	// 0x32dabd65
+ (BOOL)shouldSaveUsernamesAndPasswords;	// 0x32dabe01
- (id)initWithDOMElement:(id)domelement webFrame:(id)frame;	// 0x32daed99
- (void)abortCompletion;	// 0x32daf6e5
- (void)acceptedAutoFillWord:(id)word;	// 0x32daf9a1
- (void)autoFillCommand:(id)command;	// 0x32daf0dd
- (void)autoFillWithElementValue;	// 0x32daf9b1
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned *)index withQueryString:(id)queryString;	// 0x32dae95d
- (BOOL)currentTextChangeIsProgrammatic;	// 0x32daf6e9
- (void)dealloc;	// 0x32daef99
- (BOOL)doSourceFieldCommandBySelector:(SEL)selector;	// 0x32daf1d1
- (BOOL)hasCurrentSuggestions;	// 0x32daf95d
- (BOOL)leavingFieldReflectsSelectedListItem;	// 0x32daf6c9
- (id)queryString;	// 0x32dae6cd
- (void)reflectFinalSelectedListItem:(id)item;	// 0x32daf441
- (void)reflectSelectedListItem:(id)item;	// 0x32daf369
- (id)reflectedStringForActivatedListItem:(id)activatedListItem;	// 0x32daf6c1
- (id)reflectedStringForHighlightedListItem:(id)highlightedListItem;	// 0x32daf62d
- (BOOL)returnPerformsActionWhenShowingList;	// 0x32daf6cd
- (id)selectedListItem:(id)item;	// 0x32daf0bd
- (BOOL)shouldSuppressAutocomplete;	// 0x32daf211
- (BOOL)showsListForSingleListItem;	// 0x32daf6d1
- (void)sourceFieldTextDidChange;	// 0x32daf05d
- (void)sourceFieldTextDidEndEditing;	// 0x32daf6d5
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x32daf6ed
- (id)unsortedListItemsWithQueryString:(id)queryString;	// 0x32dae6ed
- (id)webFrame;	// 0x32daf025
@end

