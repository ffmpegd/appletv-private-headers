/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSIndexSet, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary {
@private
	struct {
		unsigned kind;
		NSObject *oldValue;
		NSObject *newValue;
		NSIndexSet *indexes;
		id extraData;
	} _details;	// 4 = 0x4
	NSObject *_originalObservable;	// 24 = 0x18
	BOOL _isPriorNotification;	// 28 = 0x1c
	BOOL _isRetainingObjects;	// 29 = 0x1d
}
- (id)initWithDetailsNoCopy:(XXStruct_xhVQEB)detailsNoCopy originalObservable:(id)observable isPriorNotification:(BOOL)notification;	// 0x30286f89
- (unsigned)count;	// 0x30332c69
- (void)dealloc;	// 0x302871d9
- (id)keyEnumerator;	// 0x30332ce1
- (id)objectForKey:(id)key;	// 0x30287005
- (void)retainObjects;	// 0x30332bf1
- (void)setDetailsNoCopy:(XXStruct_xhVQEB)copy originalObservable:(id)observable;	// 0x3029aa95
- (void)setOriginalObservable:(id)observable;	// 0x30332b89
@end

