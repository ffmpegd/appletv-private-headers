/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle, SSLogFileOptions;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SSRollableLog : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	double _lastFileStatTime;	// 8 = 0x8
	NSFileHandle *_fileHandle;	// 16 = 0x10
	NSObject<OS_dispatch_source> *_fileObserverSource;	// 20 = 0x14
	SSLogFileOptions *_options;	// 24 = 0x18
}
@property(readonly, assign) SSLogFileOptions *logOptions;	// G=0x312dff19; 
- (id)initWithLogOptions:(id)logOptions;	// 0x312dfde9
- (id)_activeLogFilePath;	// 0x312e0191
- (void)_checkLogFileSize;	// 0x312e01a9
- (void)_closeLogFile;	// 0x312e0281
- (id)_logFilePathWithIndex:(int)index;	// 0x312e02c9
- (void)_openLogFile;	// 0x312e040d
- (void)_rollLogFiles;	// 0x312e0611
- (void)dealloc;	// 0x312dfe89
// declared property getter: - (id)logOptions;	// 0x312dff19
- (void)writeString:(id)string;	// 0x312dff51
@end

