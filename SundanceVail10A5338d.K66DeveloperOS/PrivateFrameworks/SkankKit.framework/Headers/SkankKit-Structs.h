/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

typedef struct CGContext *CGContextRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGColor *CGColorRef;

typedef struct __GSFont *GSFontRef;

typedef struct CGImage *CGImageRef;

typedef struct __GSEvent *GSEventRef;

typedef struct __IOHIDEvent *IOHIDEventRef;

typedef struct __IOHIDServiceClient *IOHIDServiceClientRef;

typedef struct __IOHIDEventSystemClient *IOHIDEventSystemClientRef;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __SCPreferences *SCPreferencesRef;

typedef struct IONotificationPort *IONotificationPortRef;

typedef struct _Apple80211 Apple80211;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct __SCNetworkInterface *SCNetworkInterfaceRef;

typedef struct __SCNetworkService *SCNetworkServiceRef;

typedef struct __CFString *CFStringRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct __CTServerConnection *CTServerConnectionRef;

typedef struct __CFArray *CFArrayRef;

typedef struct __CTCall *CTCallRef;

typedef struct HDRecord {
	unsigned char _field1;
	unsigned char _field2;
	int _field3;
} HDRecord;

typedef struct HDHangHistory {
	unsigned _field1;
	unsigned _field2;
	HDRecord _field3[25];
} HDHangHistory;

typedef struct CGFont *CGFontRef;

