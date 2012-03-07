/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRAsyncTaskContext, NSMutableArray;

@interface BRURLDocumentManager : NSObject {
@private
	NSMutableArray *_activeDocuments;	// 4 = 0x4
	NSMutableArray *_queue;	// 8 = 0x8
	BRAsyncTaskContext *_taskContext;	// 12 = 0xc
}
+ (void)_processCompleteDocuments:(id)documents;	// 0x332e5d79
+ (void)initialize;	// 0x332e51ed
+ (id)textDocumentManager;	// 0x332e5241
- (id)init;	// 0x332e530d
- (void)_documentComplete:(id)complete;	// 0x332e5bfd
- (void)_processLoadDocument:(id)document;	// 0x332e5881
- (void)_removeActiveDocument:(id)document;	// 0x332e5b25
- (id)_synchronizationObject;	// 0x332e5bed
- (void)cancelLoad:(id)load;	// 0x332e5739
- (void)dealloc;	// 0x332e53d9
- (void)loadDocument:(id)document;	// 0x332e55dd
- (void)purgeDocuments;	// 0x332e548d
@end

