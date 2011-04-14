/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVLeafItem.h"

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {
	NSURL *_baseURL;	// 24 = 0x18
}
@property(retain) NSURL *baseURL;	// G=0x317b93f9; S=0x317b9411; @synthesize=_baseURL
- (id)init;	// 0x317b928d
- (id)initWithURL:(id)url;	// 0x317b924d
// declared property getter: - (id)baseURL;	// 0x317b93f9
- (void)dealloc;	// 0x317b93b1
- (id)description;	// 0x317b92b9
- (void)parserSuggestsBaseURL:(id)url;	// 0x317b90ed
- (id)payloadAsFullURL;	// 0x317b9141
- (id)payloadAsOriginalURL;	// 0x317b9101
// declared property setter: - (void)setBaseURL:(id)url;	// 0x317b9411
- (void)write:(id)write;	// 0x317b91e5
@end
