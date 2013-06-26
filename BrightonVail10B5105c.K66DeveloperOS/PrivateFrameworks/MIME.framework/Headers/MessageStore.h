/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class NSMutableSet, NSMutableArray;

@interface MessageStore : NSObject <NSCopying> {
	NSMutableSet *_uniqueStrings;	// 4 = 0x4
	union {
		struct {
			NSMutableArray *_headerDataCache;
			NSMutableArray *_headerCache;
			NSMutableArray *_bodyDataCache;
			NSMutableArray *_bodyCache;
		} objectCaches;
		struct {
			CFDictionaryRef _headerDataCache;
			CFDictionaryRef _headerCache;
			CFDictionaryRef _bodyDataCache;
			CFDictionaryRef _bodyCache;
		} intKeyCaches;
	} _caches;	// 8 = 0x8
}
+ (Class)classForMimePart;	// 0x31b2946d
+ (Class)headersClass;	// 0x31b29301
+ (void)setDefaultMessageHeadersClass:(Class)aClass;	// 0x31b29d79
- (id)_bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x31b29489
- (id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31b29b1d
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31b29a41
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31b29acd
- (id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31b29935
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31b29b05
- (id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available downloadIfNecessary:(BOOL)necessary partial:(BOOL *)partial;	// 0x31b29be5
- (void)_flushAllCaches;	// 0x31b29bd1
- (void)_flushAllCachesLocking:(BOOL)locking;	// 0x31b29b35
- (void)_flushAllMessageData;	// 0x31b292dd
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;	// 0x31b2942d
- (id)additionalHeadersForForwardOfMessage:(id)message;	// 0x31b29d8d
- (id)additionalHeadersForReplyOfMessage:(id)message;	// 0x31b29d89
- (id)bestAlternativeForPart:(id)part;	// 0x31b2989d
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x31b29c11
- (id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x31b295dd
- (id)copyWithZone:(NSZone *)zone;	// 0x31b292ed
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x31b29705
- (void)dealloc;	// 0x31b2927d
- (id)decryptedTopLevelPartForPart:(id)part;	// 0x31b2981d
- (id)defaultAlternativeForPart:(id)part;	// 0x31b2988d
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x31b29669
- (BOOL)hasCompleteDataForMimePart:(id)mimePart;	// 0x31b29cd9
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x31b292fd
- (id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;	// 0x31b29331
- (void)setMessageClass:(Class)aClass;	// 0x31b29d75
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;	// 0x31b29d5d
- (id)uniquedString:(id)string;	// 0x31b2968d
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;	// 0x31b29d71
@end
