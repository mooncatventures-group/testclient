//
//  ViewController.h
//  testclient
//
//  Created by michelle cannon on 5/18/14.
//  Copyright (c) 2014 michelle cannon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultiPeerLogger/PeerLogger.h>

//ToDo:

/* to use in your own applications 
 
 add the multpeerlogger.framework
 
 add the import
 
 <MultiPeerLogger/PeerLogger.h>
 
 */


@interface ViewController : UIViewController<connectionStateDelegate> {
    
 /* ToDo:  add the <connectionStateDelegate> */
    
PeerLogger *logger;
}
@end
