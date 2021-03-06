/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
@private
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x35eda475; 
- (id)init;	// 0x35eda31d
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x35eda331
- (id)_newSortedTargetsArray;	// 0x35eda7d1
- (BOOL)_openURL:(id)url;	// 0x35eda899
- (void)dealloc;	// 0x35eda429
// declared property getter: - (id)openURLRequest;	// 0x35eda475
- (void)run;	// 0x35eda4ad
@end

