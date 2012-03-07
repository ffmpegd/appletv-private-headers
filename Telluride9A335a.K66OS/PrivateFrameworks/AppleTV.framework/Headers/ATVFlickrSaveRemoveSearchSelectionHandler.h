/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrSaveRemoveSearchSelectionHandler : NSObject <BRSelectionHandler> {
@private
	NSString *_searchTerm;	// 4 = 0x4
}
+ (id)selectionHandlerWithSearchTerm:(id)searchTerm;	// 0x340bb135
- (id)initWithSearchTerm:(id)searchTerm;	// 0x340bb171
- (void)dealloc;	// 0x340bb1a5
- (BOOL)handleSelectionForControl:(id)control;	// 0x340bb1f1
@end

