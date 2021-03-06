/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewDelegate.h"
#import "BRTextFieldDelegate.h"
#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSTimer, NSString, NSCache, ATVSearchView;

@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate> {
@private
	NSTimer *_delayedLoadTimer;	// 84 = 0x54
	NSCache *_resultsCache;	// 88 = 0x58
	NSString *_latestSearchString;	// 92 = 0x5c
	BOOL _textDidEndEditing;	// 96 = 0x60
	NSString *_latestSearchStringWithResults;	// 100 = 0x64
}
@property(readonly, assign) NSString *latestSearchStringWithResults;	// G=0x332ecca1; @synthesize=_latestSearchStringWithResults
@property(readonly, assign) ATVSearchView *searchView;	// G=0x332ec9cd; @dynamic
- (id)init;	// 0x332ec861
- (void)_handleDelayedLoad:(id)load;	// 0x332ece41
- (id)_latestSearchString;	// 0x332eccb1
- (id)_latestSearchStringWithResults;	// 0x332eceb9
- (void)_restoreLatestSearchStringWithResults;	// 0x332ecf85
- (void)_setDelayedLoadTimer:(id)timer;	// 0x332ece15
- (void)_setLatestSearchString:(id)string;	// 0x332eccc1
- (void)_setResults:(id)results forSearch:(id)search;	// 0x332ecc19
- (void)_updateLatestSearchStringWithResults:(id)results;	// 0x332ecec9
- (void)dealloc;	// 0x332ec945
// declared property getter: - (id)latestSearchStringWithResults;	// 0x332ecca1
// declared property getter: - (id)searchView;	// 0x332ec9cd
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x332eca59
- (void)searchWithString:(id)string;	// 0x332ec9dd
- (void)textDidChange:(id)text;	// 0x332eca91
- (void)textDidEndEditing:(id)text;	// 0x332ecb75
@end

