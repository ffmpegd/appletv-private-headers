/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewDelegate.h"
#import "AppleTV-Structs.h"
#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class NSCache, NSString, ATVSearchView, NSTimer;

@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate> {
@private
	NSTimer *_delayedLoadTimer;	// 84 = 0x54
	NSCache *_resultsCache;	// 88 = 0x58
	NSString *_latestSearchString;	// 92 = 0x5c
	BOOL _textDidEndEditing;	// 96 = 0x60
	NSString *_latestSearchStringWithResults;	// 100 = 0x64
}
@property(readonly, assign) NSString *latestSearchStringWithResults;	// G=0x35ee2e79; @synthesize=_latestSearchStringWithResults
@property(readonly, assign) ATVSearchView *searchView;	// G=0x35ee2ba5; @dynamic
- (id)init;	// 0x35ee2a39
- (void)_handleDelayedLoad:(id)load;	// 0x35ee3019
- (id)_latestSearchString;	// 0x35ee2e89
- (id)_latestSearchStringWithResults;	// 0x35ee3091
- (void)_restoreLatestSearchStringWithResults;	// 0x35ee315d
- (void)_setDelayedLoadTimer:(id)timer;	// 0x35ee2fed
- (void)_setLatestSearchString:(id)string;	// 0x35ee2e99
- (void)_setResults:(id)results forSearch:(id)search;	// 0x35ee2df1
- (void)_updateLatestSearchStringWithResults:(id)results;	// 0x35ee30a1
- (void)dealloc;	// 0x35ee2b1d
// declared property getter: - (id)latestSearchStringWithResults;	// 0x35ee2e79
// declared property getter: - (id)searchView;	// 0x35ee2ba5
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x35ee2c31
- (void)searchWithString:(id)string;	// 0x35ee2bb5
- (void)textDidChange:(id)text;	// 0x35ee2c69
- (void)textDidEndEditing:(id)text;	// 0x35ee2d4d
@end
