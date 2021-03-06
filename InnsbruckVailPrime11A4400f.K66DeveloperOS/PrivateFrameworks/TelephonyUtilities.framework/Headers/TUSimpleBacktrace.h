/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import </libobjc.A.h>
#import "TelephonyUtilities-Structs.h"
#import "TUBacktrace.h"

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace> {
	NSArray *_symbolicatedBacktraceStrings;	// 4 = 0x4
	NSDictionary *_dyldContext;	// 8 = 0x8
	void **_unsymbolicatedBacktrace;	// 12 = 0xc
	int _unsymbolicatedBacktraceLength;	// 16 = 0x10
	opaque_pthread_mutex_t _symbolicateLock;	// 20 = 0x14
	BOOL _shouldSymbolicate;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *dyldContext;	// G=0x329eec3d; 
@property(assign) BOOL shouldSymbolicate;	// G=0x329eecf1; S=0x329eed09; @synthesize=_shouldSymbolicate
@property(readonly, assign) NSArray *symbolicatedBacktraceStrings;	// G=0x329eec15; 
@property(readonly, assign) NSArray *unsymbolicatedBacktraceStrings;	// G=0x329eeb49; 
+ (void)_rebuildDyldContext;	// 0x329ee385
+ (id)dyldContext;	// 0x329ee4e9
- (id)init;	// 0x329ee7b9
- (id)initIgnoringTopEntries:(int)entries symbolicateImmediately:(BOOL)immediately;	// 0x329ee81d
- (id)initWithExistingBacktrace:(void **)existingBacktrace length:(int)length symbolicateImmediately:(BOOL)immediately;	// 0x329ee891
- (id)initWithSymbolicatedBacktraceStrings:(id)symbolicatedBacktraceStrings dyldContext:(id)context;	// 0x329ee8e5
- (void)_initWithBacktrace:(void **)backtrace length:(int)length ignoreTopEntries:(int)entries symbolicateImmediately:(BOOL)immediately;	// 0x329ee739
- (void)dealloc;	// 0x329eec65
// declared property getter: - (id)dyldContext;	// 0x329eec3d
// declared property setter: - (void)setShouldSymbolicate:(BOOL)symbolicate;	// 0x329eed09
// declared property getter: - (BOOL)shouldSymbolicate;	// 0x329eecf1
- (void)symbolicate;	// 0x329ee981
// declared property getter: - (id)symbolicatedBacktraceStrings;	// 0x329eec15
// declared property getter: - (id)unsymbolicatedBacktraceStrings;	// 0x329eeb49
@end

