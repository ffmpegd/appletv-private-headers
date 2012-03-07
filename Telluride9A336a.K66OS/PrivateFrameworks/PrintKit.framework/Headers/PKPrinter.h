/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface PKPrinter : NSObject {
@private
	NSString *name;	// 4 = 0x4
	int type;	// 8 = 0x8
	int accessState;	// 12 = 0xc
	NSDictionary *printInfoSupported;	// 16 = 0x10
	http_s *job_http;	// 20 = 0x14
	NSMutableDictionary *privateData;	// 24 = 0x18
	NSMutableSet *mediaReady;	// 28 = 0x1c
	int maxPDFKBytes;	// 32 = 0x20
	int maxJPEGKBytes;	// 36 = 0x24
	int maxCopies;	// 40 = 0x28
	int preferred_landscape;	// 44 = 0x2c
	BOOL isLocal;	// 48 = 0x30
	BOOL hasIdentifyPrinterOp;	// 49 = 0x31
@protected
	int kind;	// 52 = 0x34
}
@property(retain) NSDictionary *TXTRecord;	// G=0x345c6c09; S=0x345c6add; @dynamic
@property(readonly, assign) int accessState;	// G=0x345c3745; @synthesize
@property(assign) int accessState;	// S=0x345c3785; 
@property(readonly, assign) BOOL hasIdentifyPrinterOp;	// G=0x345c3715; @synthesize
@property(readonly, assign) BOOL hasPrintInfoSupported;	// G=0x345c5c91; @dynamic
@property(retain) NSString *hostname;	// G=0x345c5db1; S=0x345c5dfd; @dynamic
@property(readonly, assign) BOOL isAdobeRGBSupported;	// G=0x345c4711; @dynamic
@property(readonly, assign) BOOL isIPPS;	// G=0x345c392d; @dynamic
@property(assign) BOOL isLocal;	// G=0x345c3725; S=0x345c3735; @synthesize
@property(readonly, assign) int kind;	// G=0x345c3765; @synthesize
@property(readonly, assign) NSString *name;	// G=0x345c3775; @synthesize
@property(retain) NSNumber *port;	// G=0x345c5e21; S=0x345c5e6d; @dynamic
@property(readonly, assign) NSDictionary *printInfoSupported;	// G=0x345c4845; 
@property(readonly, retain) NSString *scheme;	// G=0x345c6f55; 
@property(readonly, assign) int type;	// G=0x345c3755; @synthesize
@property(readonly, assign) NSString *uuid;	// G=0x345c395d; @dynamic
+ (BOOL)printerLookupWithName:(id)name andTimeout:(double)timeout;	// 0x345c3a5d
+ (id)printerWithName:(id)name;	// 0x345c39b9
- (id)initWithName:(id)name TXT:(id)txt;	// 0x345c74ad
- (id)initWithName:(id)name TXTRecord:(id)record;	// 0x345c5ea5
// declared property getter: - (id)TXTRecord;	// 0x345c6c09
- (int)abortJob;	// 0x345c3991
// declared property getter: - (int)accessState;	// 0x345c3745
- (void)cancelUnlock;	// 0x345c3b9d
- (void)checkOperations:(ipp_s *)operations;	// 0x345c5b59
- (ipp_s *)createRequest:(id)request ofType:(id)type url:(id)url;	// 0x345c79e5
- (void)dealloc;	// 0x345c5cb9
- (id)description;	// 0x345c3795
- (id)displayName;	// 0x345c37a5
- (int)finalizeJob:(int)job;	// 0x345c8059
- (int)finishJob;	// 0x345c39a5
- (ipp_s *)getPrinterAttributes;	// 0x345c6fed
// declared property getter: - (BOOL)hasIdentifyPrinterOp;	// 0x345c3715
// declared property getter: - (BOOL)hasPrintInfoSupported;	// 0x345c5c91
// declared property getter: - (id)hostname;	// 0x345c5db1
- (void)identifySelf;	// 0x345c5bb1
// declared property getter: - (BOOL)isAdobeRGBSupported;	// 0x345c4711
// declared property getter: - (BOOL)isIPPS;	// 0x345c392d
// declared property getter: - (BOOL)isLocal;	// 0x345c3725
- (BOOL)isPaperReady:(id)ready;	// 0x345c38e5
// declared property getter: - (int)kind;	// 0x345c3765
- (BOOL)knowsReadyPaperList;	// 0x345c36e5
- (id)localName;	// 0x345c837d
- (id)location;	// 0x345c38b1
- (id)matchedPaper:(id)paper preferBorderless:(BOOL)borderless withDuplexMode:(id)duplexMode didMatch:(BOOL *)match;	// 0x345c3cc9
// declared property getter: - (id)name;	// 0x345c3775
- (ipp_s *)newMediaColFromPaper:(id)paper Source:(id)source Type:(id)type DoMargins:(BOOL)margins;	// 0x345c7851
- (id)paperListForDuplexMode:(id)duplexMode;	// 0x345c45a1
// declared property getter: - (id)port;	// 0x345c5e21
// declared property getter: - (id)printInfoSupported;	// 0x345c4845
- (int)printURL:(id)url ofType:(id)type printSettings:(id)settings;	// 0x345c4111
- (id)privateObjectForKey:(id)key;	// 0x345c5fb9
- (void)reconfirmWithForce:(BOOL)force;	// 0x345c3afd
- (void)resolve;	// 0x345c5e91
- (BOOL)resolveWithTimeout:(int)timeout;	// 0x345c75e1
// declared property getter: - (id)scheme;	// 0x345c6f55
- (int)sendData:(const char *)data ofLength:(int)length;	// 0x345c40bd
// declared property setter: - (void)setAccessState:(int)state;	// 0x345c3785
- (void)setAccessStateFromTXT:(id)txt;	// 0x345c5d45
// declared property setter: - (void)setHostname:(id)hostname;	// 0x345c5dfd
// declared property setter: - (void)setIsLocal:(BOOL)local;	// 0x345c3735
// declared property setter: - (void)setPort:(id)port;	// 0x345c5e6d
- (void)setPrivateObject:(id)object forKey:(id)key;	// 0x345c60a5
// declared property setter: - (void)setTXTRecord:(id)record;	// 0x345c6add
- (int)startJob:(id)job ofType:(id)type;	// 0x345c3ec9
// declared property getter: - (int)type;	// 0x345c3755
- (void)unlockWithCompletionHandler:(id)completionHandler;	// 0x345c3bd9
- (void)updateType;	// 0x345c6d99
// declared property getter: - (id)uuid;	// 0x345c395d
@end

