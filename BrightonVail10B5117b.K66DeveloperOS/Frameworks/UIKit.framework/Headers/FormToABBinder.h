/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface FormToABBinder : NSObject {
	NSDictionary *_abPointers;	// 4 = 0x4
	NSArray *_fieldLabels;	// 8 = 0x8
	NSDictionary *_synonyms;	// 12 = 0xc
}
+ (id)abPointerForControl:(id)control rep:(id)rep useFieldName:(BOOL)name;	// 0x32f585a9
+ (void)clearBinders;	// 0x32f58575
+ (void)loadBinders;	// 0x32f58469
+ (id)synonymsForMatch:(id)match;	// 0x32f5863d
- (id)initWithPath:(id)path;	// 0x32f587e1
- (void)_indexMapping:(id)mapping;	// 0x32f586b9
- (id)abPointerForControl:(id)control rep:(id)rep useFieldName:(BOOL)name foundByPageScan:(BOOL *)scan;	// 0x32f58b49
- (void)dealloc;	// 0x32f58ad1
- (id)synonymsForMatch:(id)match;	// 0x32f58d91
@end

