//
//  ViewController.m
//  testclient
//
//  Created by michelle cannon on 5/18/14.
//  Copyright (c) 2014 michelle cannon. All rights reserved.
//

#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    logger = [[PeerLogger alloc]initWithPeer:[[UIDevice currentDevice]name]];
    logger.connectionStateDelegate = self;
    
       
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


/*ToDo: add the protocol method */

#pragma mark - MultiPeerLogger/PeerLogger

-(void)peerDidPublishState:(NSString*)state {
    if ([state  isEqual: @"connected"]) {
        int i;
        for (i = 0; i < 10; i++)
        {
            
            NSString *message = [NSString stringWithFormat:@"sending message %d ", i];
            [logger sendData:message];
            
        }
        

    }
}

@end
