/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet, NSObject<OS_dispatch_source>;

@interface AirPlayReceiverContext : NSObject {
    struct { 
        unsigned int type; 
        unsigned long long format; 
        unsigned char input; 
        unsigned char loopback; 
        unsigned char varispeed; 
        unsigned char voice; 
        unsigned char volumeControl; 
        unsigned int activeType; 
        struct AirPlayReceiverSessionPrivate {} *session; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } asbd; 
        struct OpaqueAUGraph {} *graph; 
        int converterNode; 
        struct OpaqueAudioComponentInstance {} *converterUnit; 
        int mixerNode; 
        struct OpaqueAudioComponentInstance {} *mixerUnit; 
        int varispeedNode; 
        struct OpaqueAudioComponentInstance {} *varispeedUnit; 
        int outputNode; 
        struct OpaqueAudioComponentInstance {} *outputUnit; 
        unsigned char outputStarted; 
        float outputVolume; 
        struct OpaqueAudioComponentInstance {} *inputUnit; 
        char *inputBuffer; 
        unsigned int inputMaxLen; 
        unsigned char inputStarted; 
        NSObject<OS_dispatch_source> *ducker; 
    struct { 
        unsigned int type; 
        unsigned long long format; 
        unsigned char input; 
        unsigned char loopback; 
        unsigned char varispeed; 
        unsigned char voice; 
        unsigned char volumeControl; 
        unsigned int activeType; 
        struct AirPlayReceiverSessionPrivate {} *session; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } asbd; 
        struct OpaqueAUGraph {} *graph; 
        int converterNode; 
        struct OpaqueAudioComponentInstance {} *converterUnit; 
        int mixerNode; 
        struct OpaqueAudioComponentInstance {} *mixerUnit; 
        int varispeedNode; 
        struct OpaqueAudioComponentInstance {} *varispeedUnit; 
        int outputNode; 
        struct OpaqueAudioComponentInstance {} *outputUnit; 
        unsigned char outputStarted; 
        float outputVolume; 
        struct OpaqueAudioComponentInstance {} *inputUnit; 
        char *inputBuffer; 
        unsigned int inputMaxLen; 
        unsigned char inputStarted; 
        NSObject<OS_dispatch_source> *ducker; 
    } _altAudioCtx;
    unsigned char _audioSessionActive;
    NSMutableSet *_hidDevices;
    unsigned int _hidIterator;
    struct IONotificationPort { } *_hidNotifier;
    } _mainAudioCtx;
    unsigned int _powerAssertion;
    unsigned int _receiverUISessionID;
    unsigned char _receiverUIStarted;
    struct AirPlayReceiverSessionPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; struct AirPlayReceiverServerPrivate {} *x3; void *x4; struct { void *x_5_1_1; void *x_5_1_2; int (*x_5_1_3)(); int (*x_5_1_4)(); int (*x_5_1_5)(); int (*x_5_1_6)(); int (*x_5_1_7)(); int (*x_5_1_8)(); int (*x_5_1_9)(); int (*x_5_1_10)(); int (*x_5_1_11)(); } x5; struct _opaque_pthread_mutex_t { long x_6_1_1; BOOL x_6_1_2[40]; } x6; struct _opaque_pthread_mutex_t {} *x7; id x8; unsigned int x9; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_10_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_10_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_10_1_3; } x10; unsigned char x11[16]; int x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned long long x16; unsigned long long x17; unsigned int x18; struct { struct _CCCryptor {} *x_19_1_1; unsigned char x_19_1_2[16]; } x19; struct { /* ? */ } *x20; unsigned char x21[16]; unsigned char x22[16]; struct { unsigned int x_23_1_1; unsigned int x_23_1_2; unsigned int x_23_1_3; unsigned int x_23_1_4; unsigned long long x_23_1_5; unsigned long long x_23_1_6; unsigned long long x_23_1_7; unsigned long long x_23_1_8; unsigned long long x_23_1_9; unsigned long long x_23_1_10; unsigned int x_23_1_11; unsigned int x_23_1_12; unsigned int x_23_1_13; unsigned int x_23_1_14; unsigned int x_23_1_15; double x_23_1_16; double x_23_1_17; double x_23_1_18; double x_23_1_19; int x_23_1_20; unsigned int x_23_1_21; double x_23_1_22[3]; unsigned int x_23_1_23; double x_23_1_24; double x_23_1_25; double x_23_1_26; double x_23_1_27; unsigned char x_23_1_28; unsigned int x_23_1_29; unsigned char x_23_1_30; unsigned char x_23_1_31; unsigned int x_23_1_32; unsigned int x_23_1_33; unsigned int x_23_1_34; unsigned int x_23_1_35; unsigned int x_23_1_36; unsigned int x_23_1_37; unsigned char x_23_1_38; unsigned int x_23_1_39; unsigned int x_23_1_40; unsigned int x_23_1_41; unsigned int x_23_1_42; unsigned int x_23_1_43; unsigned int x_23_1_44; unsigned char x_23_1_45; unsigned char x_23_1_46; struct { double x_47_2_1; double x_47_2_2; double x_47_2_3; double x_47_2_4; double x_47_2_5; double x_47_2_6; double x_47_2_7; double x_47_2_8; } x_23_1_47; int x_23_1_48; unsigned int x_23_1_49; unsigned int x_23_1_50; struct AirTunesRetransmitNode {} *x_23_1_51; struct AirTunesRetransmitNode {} *x_23_1_52; struct AirTunesRetransmitNode {} *x_23_1_53; unsigned char x_23_1_54; long long x_23_1_55; long long x_23_1_56; long long x_23_1_57; long long x_23_1_58; long long x_23_1_59; unsigned int x_23_1_60; unsigned int x_23_1_61; unsigned int x_23_1_62; unsigned int x_23_1_63; unsigned long long x_23_1_64; unsigned long long x_23_1_65; unsigned long long x_23_1_66; unsigned long long x_23_1_67; unsigned long long x_23_1_68; unsigned int x_23_1_69; unsigned int x_23_1_70; } x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned int x27; int x28; unsigned char x29; unsigned char x30; unsigned char x31; struct HTTPClientPrivate {} *x32; int x33; int x34; struct { struct AirPlayReceiverSessionPrivate {} *x_35_1_1; unsigned int x_35_1_2; char *x_35_1_3; int x_35_1_4; int x_35_1_5; struct _opaque_pthread_t {} *x_35_1_6; struct _opaque_pthread_t {} **x_35_1_7; struct { id x_8_2_1; struct RTPPacketNode {} *x_8_2_2; struct RTPPacketNode {} *x_8_2_3; struct RTPPacketNode {} *x_8_2_4; struct RTPPacketNode { struct RTPPacketNode {} *x_5_3_1; struct RTPPacketNode {} *x_5_3_2; struct { union { unsigned int x_1_5_1; struct { struct { unsigned char x_1_7_1; unsigned char x_1_7_2; unsigned short x_1_7_3; unsigned int x_1_7_4; unsigned int x_1_7_5; } x_2_6_1; unsigned char x_2_6_2[1]; } x_1_5_2; unsigned char x_1_5_3[1472]; } x_3_4_1; unsigned int x_3_4_2; unsigned int x_3_4_3; } x_5_3_3; char *x_5_3_4; } x_8_2_5; unsigned int x_8_2_6; unsigned int x_8_2_7; unsigned int x_8_2_8; unsigned int x_8_2_9; unsigned long long x_8_2_10; unsigned char x_8_2_11; unsigned char x_8_2_12; unsigned int x_8_2_13; unsigned int x_8_2_14; unsigned int x_8_2_15; unsigned int x_8_2_16; char *x_8_2_17; } x_35_1_8; unsigned int x_35_1_9; unsigned int x_35_1_10; unsigned int x_35_1_11; unsigned int x_35_1_12; unsigned long long x_35_1_13; unsigned long long x_35_1_14; struct { unsigned long long x_15_2_1; unsigned int x_15_2_2; } x_35_1_15[30]; unsigned int x_35_1_16; float x_35_1_17; unsigned int x_35_1_18; struct { char *x_19_2_1; char *x_19_2_2; unsigned int x_19_2_3; unsigned int x_19_2_4; unsigned int x_19_2_5; unsigned int x_19_2_6; } x_35_1_19; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_20_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_20_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_20_2_3; } x_35_1_20; unsigned int x_35_1_21; unsigned short x_35_1_22; } x35; struct { struct AirPlayReceiverSessionPrivate {} *x_36_1_1; unsigned int x_36_1_2; char *x_36_1_3; int x_36_1_4; int x_36_1_5; struct _opaque_pthread_t {} *x_36_1_6; struct _opaque_pthread_t {} **x_36_1_7; struct { id x_8_2_1; struct RTPPacketNode {} *x_8_2_2; struct RTPPacketNode {} *x_8_2_3; struct RTPPacketNode {} *x_8_2_4; struct RTPPacketNode { struct RTPPacketNode {} *x_5_3_1; struct RTPPacketNode {} *x_5_3_2; struct { union { unsigned int x_1_5_1; struct { struct { unsigned char x_1_7_1; unsigned char x_1_7_2; unsigned short x_1_7_3; unsigned int x_1_7_4; unsigned int x_1_7_5; } x_2_6_1; unsigned char x_2_6_2[1]; } x_1_5_2; unsigned char x_1_5_3[1472]; } x_3_4_1; unsigned int x_3_4_2; unsigned int x_3_4_3; } x_5_3_3; char *x_5_3_4; } x_8_2_5; unsigned int x_8_2_6; unsigned int x_8_2_7; unsigned int x_8_2_8; unsigned int x_8_2_9; unsigned long long x_8_2_10; unsigned char x_8_2_11; unsigned char x_8_2_12; unsigned int x_8_2_13; unsigned int x_8_2_14; unsigned int x_8_2_15; unsigned int x_8_2_16; char *x_8_2_17; } x_36_1_8; unsigned int x_36_1_9; unsigned int x_36_1_10; unsigned int x_36_1_11; unsigned int x_36_1_12; unsigned long long x_36_1_13; unsigned long long x_36_1_14; struct { unsigned long long x_15_2_1; unsigned int x_15_2_2; } x_36_1_15[30]; unsigned int x_36_1_16; float x_36_1_17; unsigned int x_36_1_18; struct { char *x_19_2_1; char *x_19_2_2; unsigned int x_19_2_3; unsigned int x_19_2_4; unsigned int x_19_2_5; unsigned int x_19_2_6; } x_36_1_19; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_20_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_20_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_20_2_3; } x_36_1_20; unsigned int x_36_1_21; unsigned short x_36_1_22; } x36; unsigned int x37; unsigned int x38; unsigned int x39; int x40; int x41; unsigned char x42; unsigned short x43; unsigned short x44[512]; int x45; int x46; int x47; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_48_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_48_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_48_1_3; } x48; unsigned int x49; unsigned char x50; int x51; int x52; int x53; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_54_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_54_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_54_1_3; } x54; unsigned int x55; unsigned char x56; int x57; struct _opaque_pthread_t {} *x58; struct _opaque_pthread_t {} **x59; unsigned int x60; unsigned int x61; char *x62; struct AirTunesBufferNode {} *x63; struct AirTunesBufferNode { struct AirTunesBufferNode {} *x_64_1_1; struct AirTunesBufferNode {} *x_64_1_2; struct { /* ? */ } *x_64_1_3; char *x_64_1_4; unsigned int x_64_1_5; char *x_64_1_6; unsigned int x_64_1_7; } x64; struct AirTunesBufferNode {} *x65; struct AirTunesBufferNode {} *x66; unsigned int x67; char *x68; unsigned int x69; char *x70; unsigned int x71; char *x72; unsigned int x73; unsigned int x74; unsigned char x75; unsigned long long x76; unsigned long long x77; unsigned int x78; unsigned int x79; unsigned short x80; unsigned int x81; unsigned char x82; unsigned int x83; unsigned short x84; struct OpaqueAudioConverter {} *x85; char *x86; char *x87; struct AudioStreamPacketDescription { long long x_88_1_1; unsigned int x_88_1_2; unsigned int x_88_1_3; } x88; unsigned int x89; unsigned char x90; int x91; int x92; int x93; int x94; unsigned long long x95; unsigned long long x96; struct __CFDictionary {} *x97; unsigned char x98; unsigned char x99; unsigned int x100; unsigned char x101; unsigned char x102; unsigned char x103; unsigned int x104; unsigned int x105; unsigned int x106; unsigned char x107; unsigned int x108; unsigned int x109; unsigned int x110; unsigned char x111; struct AirPlayReceiverSessionScreenPrivate {} *x112; int x113; struct _opaque_pthread_t {} *x114; struct _opaque_pthread_t {} **x115; int x116; int x117; struct AirPlayRTPBuffer {} *x118; struct AirPlayRTPBuffer {} *x119; unsigned char x120; struct DashboardClientPrivate {} *x121; unsigned char x122; struct { unsigned char x_123_1_1; unsigned char x_123_1_2; unsigned char x_123_1_3; unsigned char x_123_1_4; unsigned char x_123_1_5; unsigned char x_123_1_6; unsigned char x_123_1_7; unsigned char x_123_1_8; unsigned char x_123_1_9; unsigned char x_123_1_10; unsigned char x_123_1_11; unsigned char x_123_1_12; unsigned char x_123_1_13; unsigned char x_123_1_14; unsigned char x_123_1_15; unsigned char x_123_1_16; unsigned int x_123_1_17; unsigned int x_123_1_18; unsigned short x_123_1_19; short x_123_1_20; short x_123_1_21; unsigned short x_123_1_22; unsigned short x_123_1_23; unsigned short x_123_1_24; unsigned short x_123_1_25; unsigned char x_123_1_26[6]; unsigned char x_123_1_27[6]; BOOL x_123_1_28; BOOL x_123_1_29; BOOL x_123_1_30; BOOL x_123_1_31; unsigned char x_123_1_32; unsigned char x_123_1_33; BOOL x_123_1_34[16]; unsigned char x_123_1_35; unsigned char x_123_1_36; unsigned char x_123_1_37; unsigned char x_123_1_38[1]; } x123; unsigned long long x124; unsigned long long x125; unsigned int x126; unsigned int x127; unsigned int x128; } *_session;
    unsigned char _sessionStarted;
}

- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;

@end