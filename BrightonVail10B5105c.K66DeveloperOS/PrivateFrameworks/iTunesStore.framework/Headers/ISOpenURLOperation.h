/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x36057d91; 
- (id)init;	// 0x36057c39
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x36057c4d
- (id)_newSortedTargetsArray;	// 0x36058135
- (BOOL)_openURL:(id)url;	// 0x36058209
- (void)dealloc;	// 0x36057d45
// declared property getter: - (id)openURLRequest;	// 0x36057d91
- (void)run;	// 0x36057dc9
@end
